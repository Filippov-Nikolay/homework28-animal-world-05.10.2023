#include "Herbivore.h"

void Herbivore::Eat() { weight += 10; }


char* Herbivore::GetNameHerbivore() const { return nameHerbivore; }
float Herbivore::GetWeight() const { return weight; }
bool Herbivore::GetLife() const { return life; }


void Herbivore::SetNameHerbivore(const char* n) {
	nameHerbivore = new char[strlen(n) + 1];
	strcpy_s(nameHerbivore, strlen(n) + 1, n);
}


void Herbivore::SetWeight(float w) { weight = w; }
void Herbivore::SetLife(bool l) { life = l; }
