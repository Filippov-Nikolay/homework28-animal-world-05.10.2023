// Африка

#pragma once
#include "Continent.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Africa : public Continent {
	Herbivore* herbivore;
	Carnivore* carnivore;
public:
	Africa();
	Africa(const char*, float, float, float); // Делегирование

	void Print();
};
