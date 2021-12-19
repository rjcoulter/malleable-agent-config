#include <iostream>
#include "config.h"
#include "json.hpp"

int main() {
    nlohmann::json j = nlohmann::json::parse(CONFIG_BUFFER);
    std::cout << CONFIG_BUFFER;
}