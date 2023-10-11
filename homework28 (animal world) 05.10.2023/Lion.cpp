#include "Lion.h"
#include <iostream>

using namespace std;

Lion::Lion(const char* n, int p, AnimalWorld* aw, Continent* c) {
	nameCarnivore = new char[strlen(n) + 1];
	strcpy_s(nameCarnivore, strlen(n) + 1, n);

	aw->AddCarnivore(this);

	power = p;
	continent = c;
}
Lion::~Lion() { delete continent; }

void Lion::Print() {
	cout << "������: " << nameCarnivore << endl;
	cout << "����: " << power << endl;
	cout << "������� �: " << continent->GetContinent();
}

void Lion::EatHerbivore(Herbivore* obj) {
	// cout << "Continents: " << continent->GetContinent() << " - " << obj->GetContinent() << endl;

	if (continent->GetContinent() != obj->GetContinent()) {
		cout << "��� ��������� �� ������ �����������!" << endl;
		return;
	}

	cout << nameCarnivore << ", ���: " << obj->GetNameHerbivore() << endl;
	cout << "���� �������: " << power << ", ��� �����������: " << obj->GetWeight() << endl;

	if (obj->GetWeight() < power)
		power += 10;
	else
		power -= 10;

	obj->SetLife(false);
}