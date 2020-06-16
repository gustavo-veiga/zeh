#include <zeh/service/geo.h>
using namespace zeh::model;
using namespace zeh::service;

bool geo::point_in_bounding_box(const point &point, const bounding_box &bounding_box) {
    // Check if point is in bounding box

    // Bottom Left is the smallest and x and y value
    // Top Right is the largest x and y value
    return point.x < bounding_box.top_right.x
        and point.x > bounding_box.bottom_left.x
        and point.y < bounding_box.top_right.y
        and point.y > bounding_box.bottom_left.y;
}