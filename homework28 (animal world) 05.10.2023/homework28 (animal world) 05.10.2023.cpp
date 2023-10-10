#include <iostream>
#include "AnimalWorld.h"
#include "Continent.h"
#include "Africa.h"
#include "NorthAmerica.h"
#include "Herbivore.h"
#include "Carnivore.h"
#include "Lion.h"
#include "Antelope.h"
#include "Wolf.h"
#include "Buffalo.h"

using namespace std;

int main() {
	setlocale(0, "");

	Continent* africa = new Africa("Африка", 30.370, 28, 25);
	africa->Print();
	cout << endl << endl;

	Continent* northAmerica = new NorthAmerica("Северная Америка", 24.710, 16, 60);
	northAmerica->Print();
	cout << endl << endl;



	AnimalWorld animalWorld;

	Carnivore* carnivore = new Lion("Лев", 100, &animalWorld, africa);
	carnivore->Print();
	cout << endl << endl;

	Carnivore* carnivore1 = new Wolf("Волк", 75, &animalWorld, northAmerica);
	carnivore1->Print();
	cout << endl << endl;


	Herbivore* herbivore = new Antelope("Антилопа", 50, africa);
	herbivore->Print();
	cout << endl << endl;

	Herbivore* herbivore1 = new Buffalo("Бизон", 990, northAmerica);
	herbivore1->Print();
	cout << endl << endl;


	herbivore->Eat();
	cout << endl << endl;



	carnivore->EatHerbivore(herbivore);
	herbivore->Print();
	cout << endl << endl;

	carnivore1->EatHerbivore(herbivore);
	herbivore->Print();
	cout << endl << endl;

	carnivore1->EatHerbivore(herbivore1);
	herbivore1->Print();
	cout << endl << endl;

	carnivore1->Print();
	cout << endl << endl;

	return 0;
}
