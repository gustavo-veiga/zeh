#ifndef ZEH_GEO_H
#define ZEH_GEO_H
#include <zeh/model/point.h>
#include <zeh/model/polygon.h>
#include <zeh/model/bounding_box.h>
using namespace zeh::model;

namespace zeh {
    namespace service {
        struct geo {
            bool point_in_bounding_box(const point& point, const bounding_box& bounding_box);
            bool point_in_polygon(const point& point, const polygon& polygon);
            bounding_box get_bounding_box(const polygon& polygon);
        };
    }
}
#endif //ZEH_GEO_H
