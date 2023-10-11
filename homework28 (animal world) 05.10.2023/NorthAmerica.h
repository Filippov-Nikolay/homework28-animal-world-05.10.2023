// Север. Америка

#pragma once
#include "Continent.h"
#include "Herbivore.h"
#include "Carnivore.h"

class NorthAmerica : public Continent {
	Herbivore* herbivore;
	Carnivore* carnivore;
public:
	NorthAmerica();
	NorthAmerica(const char*, float, float, float); // Делегирование

	void Print();
};