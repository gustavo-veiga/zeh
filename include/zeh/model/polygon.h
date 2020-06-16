#ifndef ZEH_POLYGON_H
#define ZEH_POLYGON_H
#include <vector>
#include <zeh/model/point.h>

namespace zeh {
    namespace model {
        struct polygon {
            std::vector<point> points;
        };
    }
}
#endif //ZEH_POLYGON_H
