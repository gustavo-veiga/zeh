#ifndef ZEH_BOUNDING_BOX_H
#define ZEH_BOUNDING_BOX_H
#include <zeh/model/point.h>

namespace zeh {
    namespace model {
        struct bounding_box {
            point bottom_left;
            point top_right;
        };
    }
}
#endif //ZEH_BOUNDING_BOX_H
