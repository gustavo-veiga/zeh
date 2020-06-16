#include <cinatra.hpp>
#include <zeh/controller/partner_controller.h>
using namespace cinatra;

namespace zeh {
    namespace controller {
        void partner_controller::create_new(request &request, response &response) {
            auto body = std::string(request.body());
            response.set_status_and_content(status_type::created, static_cast<std::string &&>(body));
        }

        void partner_controller::get_by_id(request &request, response &response) {
            response.set_status_and_content(status_type::ok, "GET_BY_ID");
        }

        void partner_controller::search(request &request, response &response) {
            response.set_status_and_content(status_type::ok, "SEARCH");
        }
    }
}
