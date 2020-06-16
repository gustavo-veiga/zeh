#ifndef ZEH_PARTNER_H
#define ZEH_PARTNER_H
#include <string>
#include <vector>
#include <zeh/model/point.h>

namespace zeh {
    namespace model {
        struct partner {
            long id;
            std::string trading_name;
            std::string document;
            point address;
            std::vector<std::vector<point>> coverage_area;
        };
    }
}
#endif //ZEH_PARTNER_H
