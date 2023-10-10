#pragma once
#include "Herbivore.h"
#include "Continent.h"

class Antelope: public Herbivore {
	Continent* continent;
public:
	Antelope(const char*, float, Continent*);
	~Antelope();

	void Print();
};

