// Африка

#pragma once
#include "Continent.h"

class Africa : public Continent {
public:
	Africa();
	Africa(const char*, float, float, float); // Делегирование

	void Print();
};
