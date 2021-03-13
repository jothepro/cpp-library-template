#include "MyLibrary/example.hpp"
#include <nlohmann/json.hpp>

using namespace MyLibrary;
using json = nlohmann::json;

std::string Example::test() {
    json testJson = {{"hello", "world!"}};
    return testJson.dump(4);
}