#include <memory>
#include <argh.h>
#include <zeh/server.h>

int main(int argc, char* argv[]) {
    argh::parser cmdl(argv);
    if (cmdl[{"-h", "--help"}]) {
    } else {
        std::string port;
        std::string address;
        cmdl("port", "3000") >> port;
        cmdl("address", "localhost") >> address;
        std::make_unique<zeh::server>(address, port);
    }
    return EXIT_SUCCESS;
}
