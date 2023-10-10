#include "Carnivore.h"

using namespace std;

Carnivore::Carnivore() {
	nameCarnivore = nullptr;
	power = 0;
}
Carnivore::~Carnivore() { delete nameCarnivore; }
