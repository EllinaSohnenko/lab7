#pragma once
#include "Weather.h"
#include "Service.h"
#include <iostream>

class XmlService :public Service {
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};