#ifndef ZEH_HOME_CONTROLLER_H
#define ZEH_HOME_CONTROLLER_H
#include <string>
#include <cinatra.hpp>
using namespace cinatra;

namespace zeh {
    namespace controller {
        struct home_controller {
            static void index(request& request, response& response);
        };
    }
}
#endif //ZEH_HOME_CONTROLLER_H
