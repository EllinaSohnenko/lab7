#include "Weather.h"
#include "XmlService.h"
#include "src\pugixml.hpp"
#include <fstream>
#include <string>
#include <iostream>

using namespace pugi;
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    XmlService xs;
    Weather w1 = xs.getWeather("weather.xml");
    w1.print();
}