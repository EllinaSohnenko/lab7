#include "Weather.h"
#include "JsonService.h"
#include "XmlService.h"
#include "nlohmann\json.hpp"
#include "src\pugixml.hpp"
#include <fstream>
#include <string>
#include <iostream>

using namespace pugi;
using namespace std;
using nlohmann::json;

int main() {
    setlocale(LC_ALL, "Ru");
    cout << "json:\n";
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.print();
    cout << "\nxml:\n";
    XmlService xs;
    Weather w1 = xs.getWeather("weather.xml");
    w1.print();
}