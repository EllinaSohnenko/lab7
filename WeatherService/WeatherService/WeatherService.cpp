#include "Weather.h"
<<<<<<< HEAD
#include "JsonService.h"
#include "nlohmann\json.hpp"
=======
#include "XmlService.h"
#include "src\pugixml.hpp"
>>>>>>> feature-xml
#include <fstream>
#include <string>
#include <iostream>

<<<<<<< HEAD
using namespace std;
using nlohmann::json;

int main() {
    setlocale(LC_ALL, "Ru");
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.print();
=======
using namespace pugi;
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    XmlService xs;
    Weather w1 = xs.getWeather("weather.xml");
    w1.print();
>>>>>>> feature-xml
}