// Плотоядные

#pragma once
#include "Herbivore.h"

class Carnivore {
protected:
	char* nameCarnivore;
	int power;
public:
	Carnivore();
	virtual void EatHerbivore(Herbivore*) = 0;
	virtual void Print() = 0;
	~Carnivore();
};
