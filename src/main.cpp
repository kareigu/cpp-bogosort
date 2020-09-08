#include <iostream>
#include "../include/logger.hpp"

int main() {
    log::print("yes");
    log::debug("val", 3);
    return 0;
}
