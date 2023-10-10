#pragma once
#include "AnimalWorld.h"
#include "Carnivore.h"
#include "Continent.h"

class Wolf : public Carnivore {
	Continent* continent;
public:
	Wolf(const char*, int, AnimalWorld*, Continent*);
	~Wolf();

	void Print();

	virtual void EatHerbivore(Herbivore*);
};

