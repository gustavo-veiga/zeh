#include <limits>
#include <algorithm>
#include <zeh/service/geo.h>
using namespace zeh::model;
using namespace zeh::service;

bounding_box geo::get_bounding_box(const polygon &polygon) {
    double max_x = std::numeric_limits<double>::min();
    double max_y = std::numeric_limits<double>::min();
    double min_x = std::numeric_limits<double>::max();
    double min_y = std::numeric_limits<double>::max();
    std::for_each(polygon.points.begin(), polygon.points.end(), [&](point size) {
        max_x = std::max(size.x, max_x);
        max_y = std::max(size.y, max_y);
        min_x = std::min(size.x, min_y);
        min_y = std::min(size.y, min_y);
    });
    return {
            {min_x, min_y},
            {max_x, max_y}
    };
}
