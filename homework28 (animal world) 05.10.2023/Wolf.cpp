#include "Wolf.h"
#include <iostream>

using namespace std;

Wolf::Wolf(const char* n, int p, AnimalWorld* aw, Continent* c) {
	nameCarnivore = new char[strlen(n) + 1];
	strcpy_s(nameCarnivore, strlen(n) + 1, n);

	power = p;
	continent = c;
}
Wolf::~Wolf() { delete continent; }

void Wolf::Print() {
	cout << "Хищник: " << nameCarnivore << endl;
	cout << "Сила: " << power << endl;
	cout << "Обитает в: " << continent->GetContinent();
}

void Wolf::EatHerbivore(Herbivore* obj) {
	if (continent->GetContinent() != obj->GetContinent()) {
		cout << "Они находятся на разных континентах!" << endl;
		return;
	}

	cout << nameCarnivore << ", ест: " << obj->GetNameHerbivore() << endl;
	cout << "Сила хищника: " << power << ", вес травоядного: " << obj->GetWeight() << endl;

	if (obj->GetWeight() < power)
		power += 10;
	else
		power -= 10;

	obj->SetLife(false);
}
