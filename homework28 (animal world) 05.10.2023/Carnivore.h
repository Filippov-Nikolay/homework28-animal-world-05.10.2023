// Плотоядные

#pragma once
#include "Herbivore.h"
#include "Africa.h"
#include "NorthAmerica.h"
#include "Continent.h"

class Carnivore : public Africa, public NorthAmerica {
protected:
	char* nameCarnivore;
	int power;
public:
	Carnivore();
	virtual void EatHerbivore(Herbivore*) = 0;
	virtual void Print() = 0;
	~Carnivore();
};
