#pragma once
#include "Herbivore.h"
#include "Continent.h"
#include "AnimalWorld.h"

class Antelope: public Herbivore {
	Continent* continent;
public:
	Antelope(const char*, float, AnimalWorld*, Continent*);
	~Antelope();

	char* GetContinent() const;

	void Print();
};