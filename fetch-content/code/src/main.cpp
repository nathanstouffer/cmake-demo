#include <iostream>

#include <nlohmann/json.hpp>

int main()
{
    nlohmann::json j = nlohmann::json();
    j["hello"] = "FetchContent";

    std::cout << j.dump(4) << std::endl;
}