#include <CLI11.hpp>

int main(int argc, char **argv) {

CLI::App appParses{"DashHero Test App"};

char appIdentityOption;
appParses.add_option("-o", appIdentityOption, "");


// Catch an exception and handle with app.exit for nice clean exit if arguments are
// invalid
CLI11_PARSE(appParses, argc, argv);


}