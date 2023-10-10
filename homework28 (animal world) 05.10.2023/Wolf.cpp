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
	cout << "������: " << nameCarnivore << endl;
	cout << "����: " << power << endl;
	cout << "������� �: " << continent->GetContinent();
}

void Wolf::EatHerbivore(Herbivore* obj) {
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
