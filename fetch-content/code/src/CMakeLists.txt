add_executable(fetch-content "main.cpp")

target_link_libraries(fetch-content PRIVATE nlohmann_json::nlohmann_json)