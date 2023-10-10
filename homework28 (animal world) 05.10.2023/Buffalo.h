#pragma once
#include "Herbivore.h"
#include "Continent.h"

class Buffalo : public Herbivore {
	Continent* continent;
public:
	Buffalo(const char*, float, Continent*);
	~Buffalo();

	char* GetContinent() const;

	void Print();
};

