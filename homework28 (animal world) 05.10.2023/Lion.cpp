#include "Lion.h"
#include <iostream>

using namespace std;

Lion::Lion(const char* n, int p, AnimalWorld* aw, Continent* c) {
	nameCarnivore = new char[strlen(n) + 1];
	strcpy_s(nameCarnivore, strlen(n) + 1, n);

	power = p;
	continent = c;
}

void Lion::Print() {
	cout << "Хищник: " << nameCarnivore << endl;
	cout << "Сила: " << power << endl;
	cout << "Обитает в: " << continent->GetContinent();
}

Lion::~Lion() {
	delete continent;
}
