#ifndef ZEH_PARTNER_CONTROLLER_H
#define ZEH_PARTNER_CONTROLLER_H
#include <string>
#include <cinatra.hpp>
using namespace cinatra;

namespace zeh {
    namespace controller {
        struct partner_controller {
            static void create_new(request& request, response& response);
            static void get_by_id(request& request, response& response);
            static void search(request& request, response& response);
        };
    }
}
#endif //ZEH_PARTNER_CONTROLLER_H
