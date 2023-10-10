#include "Antelope.h"

using namespace std;

Antelope::Antelope(const char* n, float w, Continent* c) {
	nameHerbivore = new char[strlen(n) + 1];
	strcpy_s(nameHerbivore, strlen(n) + 1, n);

	life = true;
	weight = w;
	continent = c;
}

Antelope::~Antelope() {
	delete continent;
}

void Antelope::Print() {
	cout << "Травоядное: " << nameHerbivore << endl;
	cout << "Вес: " << weight << endl;
	printf("Статус: %s", life == true ? "жив" : "не жив");
}
