// Плотоядные

#pragma once
#include "Herbivore.h"
#include "Continent.h"

class Carnivore : public Continent {
protected:
	char* nameCarnivore;
	int power;
public:
	Carnivore();
	void EatHerbivore(Herbivore*);
	~Carnivore();
};
