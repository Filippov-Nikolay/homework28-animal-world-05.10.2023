#include "Antelope.h"

using namespace std;

Antelope::Antelope(const char* n, float w, Continent* c) {
	nameHerbivore = new char[strlen(n) + 1];
	strcpy_s(nameHerbivore, strlen(n) + 1, n);

	life = true;
	weight = w;
	continent = c;
}
Antelope::~Antelope() { delete continent; }

char* Antelope::GetContinent() const { return continent->GetContinent(); }

void Antelope::Print() {
	cout << "����������: " << nameHerbivore << endl;
	cout << "���: " << weight << endl;
	cout << "������� �: " << continent->GetContinent() << endl;
	printf("������: %s", life == true ? "���" : "�� ���");
}
