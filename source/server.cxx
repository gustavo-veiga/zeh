#include <string>
#include <iostream>
#include <cinatra.hpp>
#include <zeh/server.h>
#include <zeh/controller/home_controller.h>
#include <zeh/controller/partner_controller.h>
using namespace cinatra;
using namespace zeh::controller;

zeh::server::server(std::string address, std::string port) {
    http_server server(std::thread::hardware_concurrency());
    server.listen(address, port);

    // Register Controllers
    server.set_http_handler<GET>("/", home_controller::index);
    server.set_http_handler<POST>("/partner", partner_controller::create_new);
    server.set_http_handler<GET>("/partner/:id", partner_controller::get_by_id);
    server.set_http_handler<GET>("/partner/search", partner_controller::search);

    // Log
    std::cout << "Server Started at " << address << ":" << port << std::endl;
    server.run();
}