// Континент

#pragma once
#include <iostream>
// #include "AnimalWorld.h"

class Continent {
protected:
	char* continent;
	double square;
	double temperature;
	double humidity;
public:
	Continent();
	Continent(const char*, double, double, double);
	void Input();
	virtual void Print() = 0;
	virtual ~Continent() = 0;


	char* GetContinent() const;
	double GetSquare() const;
	double GetTemperature() const;
	double GetHumidity() const;
};