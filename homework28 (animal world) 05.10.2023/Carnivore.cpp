#include "Carnivore.h"

using namespace std;

Carnivore::Carnivore() {
	nameCarnivore = nullptr;
	power = 0;
}

void Carnivore::EatHerbivore(Herbivore* obj) {
	cout << nameCarnivore << ", ���: " << obj->GetNameHerbivore() << endl;
	cout << "���� �������: " << power << ", ��� �����������: " << obj->GetWeight() << endl;

	cout << "TEST^" << Carnivore::GetContinent() << endl;

	if (obj->GetWeight() < power)
		power += 10;
	else
		power -= 10;

	obj->SetLife(false);
}

Carnivore::~Carnivore() {
	delete nameCarnivore;
}
