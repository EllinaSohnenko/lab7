#pragma once
#include "Service.h"
#include "Weather.h"
#include <iostream>
using namespace std;

class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};