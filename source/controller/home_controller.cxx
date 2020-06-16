#include <cinatra.hpp>
#include <zeh/controller/home_controller.h>
using namespace cinatra;

namespace zeh {
    namespace controller {
        void home_controller::index(request &request, response &response) {
            response.set_status_and_content(status_type::created, "HOME");
        }
    }
}
