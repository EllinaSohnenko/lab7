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
	cout << "�����: " << city << "\n����������: " << lon << " " << lat << "\n�����������: " << temperature << "\n������: " << weather << "\n�������� �����: " << windSpeed << "\n����������: " << clouds << endl;
}