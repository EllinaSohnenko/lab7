#include "Weather.h"
#include "JsonService.h"
#include "nlohmann\json.hpp"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;
using nlohmann::json;

int main() {
    setlocale(LC_ALL, "Ru");
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.print();
}