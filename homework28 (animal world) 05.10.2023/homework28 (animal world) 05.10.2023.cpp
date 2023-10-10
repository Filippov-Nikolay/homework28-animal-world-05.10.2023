#include <iostream>
#include "AnimalWorld.h"
#include "Continent.h"
#include "Africa.h"
#include "NorthAmerica.h"
#include "Herbivore.h"
#include "Carnivore.h"
#include "Lion.h"
#include "Antelope.h"

using namespace std;

int main() {
	setlocale(0, "");

	Continent* continent = new Africa("Африка", 30.370, 28, 25);
	continent->Print();
	cout << endl << endl;

	Continent* continent1 = new NorthAmerica("Северная Америка", 24.710, 16, 60);
	continent1->Print();
	cout << endl << endl;



	AnimalWorld animalWorld;

	Carnivore* carnivore = new Lion("Лев", 100, &animalWorld, continent);
	carnivore->Print();
	cout << endl << endl;

	Herbivore* herbivore = new Antelope("Антилопа", 25, continent1);
	herbivore->Print();
	cout << endl << endl;
	herbivore->Eat();


	carnivore->EatHerbivore(herbivore);
	herbivore->Print();
	cout << endl << endl;

	return 0;
}
