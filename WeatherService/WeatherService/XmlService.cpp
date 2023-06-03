#include "XmlService.h"
#include "src\pugixml.hpp"
#include <iostream>
#include <sstream>
using namespace pugi;

Weather XmlService::getWeather(std::string st) {
    xml_document doc;
    xml_parse_result result = doc.load_file(st.c_str());
    xml_node node = doc.child("current");
    if (!result)
        throw exception("error");
    std::string city = node.child("city").attribute("name").as_string(); //  Киров
    stringstream s;
    s << string(node.child("city").child("coord").attribute("lon").as_string());
    double lon; // 49.6601
    s >> lon;
    s.clear();
    s << string(node.child("city").child("coord").attribute("lat").as_string());
    double lat; // 58.5966
    s >> lat;
    s.clear();
    s << string(node.child("temperature").attribute("value").as_string());
    double temperature; // 5.69
    s >> temperature;
    s.clear();
    std::string weather = node.child("weather").attribute("value").as_string(); // дождь
    s << string(node.child("wind").child("speed").attribute("value").as_string());
    double windSpeed; // 4.27
    s >> windSpeed;
    s.clear();
    int clouds = node.child("clouds").attribute("value").as_int(); // 100
    return Weather(temperature, weather, windSpeed, clouds, city, lon, lat);
}