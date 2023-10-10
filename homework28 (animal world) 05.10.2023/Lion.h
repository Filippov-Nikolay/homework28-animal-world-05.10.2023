#pragma once
#include "AnimalWorld.h"
#include "Carnivore.h"
#include "Continent.h"

class Lion : public Carnivore {
	Continent* continent;
public:
	Lion(const char*, int, AnimalWorld*, Continent*);
	~Lion();

	void Print();
};