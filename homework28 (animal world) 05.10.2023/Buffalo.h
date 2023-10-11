#pragma once
#include "Herbivore.h"
#include "Continent.h"
#include "AnimalWorld.h"

class Buffalo : public Herbivore {
	Continent* continent;
public:
	Buffalo(const char*, float, AnimalWorld*, Continent*);
	~Buffalo();

	char* GetContinent() const;

	void Print();
};

