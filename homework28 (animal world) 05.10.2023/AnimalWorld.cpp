#include <iostream>
#include "AnimalWorld.h"

using namespace std;

unsigned int AnimalWorld::quantityCarnivore = 0U;
unsigned int AnimalWorld::quantityHerbivore = 0U;

AnimalWorld::AnimalWorld() {
	carnivore = new Carnivore * [size];
	herbivore = new Herbivore * [size];
}

void AnimalWorld::mealsHerbivores() {
	for (int i = 0; i < quantityHerbivore; i++)
		herbivore[i]->Eat();
}

void AnimalWorld::nutritionCarnivores() {
	if (quantityCarnivore < quantityHerbivore)
		for (int i = 0; i < quantityCarnivore; i++) 
			if (herbivore[i]->GetLife())
				carnivore[i]->EatHerbivore(herbivore[i]);	

	else
		for (int i = 0; i < quantityHerbivore; i++)
			if (herbivore[i]->GetLife())
				carnivore[i]->EatHerbivore(herbivore[i]);	
}

void AnimalWorld::AddCarnivore(Carnivore* c) {
	if (quantityCarnivore < size)
		carnivore[quantityCarnivore++] = c;
	else
		cout << "Макс. кол-во плотоядных" << endl;
}

void AnimalWorld::AddHerbivore(Herbivore* h) {
	if (quantityHerbivore < size)
		herbivore[quantityHerbivore++] = h;
	else
		cout << "Макс. кол-во травооядных" << endl;
}

AnimalWorld::~AnimalWorld() {
	delete carnivore;
	delete herbivore;
}
