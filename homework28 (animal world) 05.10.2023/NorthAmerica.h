// Север. Америка

#pragma once
#include "Continent.h"

class NorthAmerica : public Continent {
public:
	NorthAmerica(const char*, float, float, float); // Делегирование

	void Print();
};