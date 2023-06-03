#include "Weather.h"
#include <iostream>
using namespace std;

Weather::Weather(double temperature, string weather, double windSpeed, int clouds, string city, double lon, double lat) {
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
	this->city = city;
	this->lon = lon;
	this->lat = lat;
}
void Weather::print() {
	cout << "Город: " << city << "\nКоординаты: " << lon << " " << lat << "\nТемпература: " << temperature << "\nПогода: " << weather << "\nСкорость ветра: " << windSpeed << "\nОблачность: " << clouds << endl;
}