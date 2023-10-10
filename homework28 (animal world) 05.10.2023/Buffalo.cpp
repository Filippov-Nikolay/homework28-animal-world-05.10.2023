#include "Buffalo.h"

using namespace std;

Buffalo::Buffalo(const char* n, float w, Continent* c) {
	nameHerbivore = new char[strlen(n) + 1];
	strcpy_s(nameHerbivore, strlen(n) + 1, n);

	life = true;
	weight = w;
	continent = c;
}

Buffalo::~Buffalo() { delete continent; }

char* Buffalo::GetContinent() const { return continent->GetContinent(); }

void Buffalo::Print() {
	cout << "Травоядное: " << nameHerbivore << endl;
	cout << "Вес: " << weight << endl;
	cout << "Обитает в: " << continent->GetContinent() << endl;
	printf("Статус: %s", life == true ? "жив" : "не жив");
}
