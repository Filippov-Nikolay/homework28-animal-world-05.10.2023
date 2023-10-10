// Травоядные

#pragma once
#include "Continent.h"

class Herbivore : public Continent {
protected:
	char* nameHerbivore;
	float weight;
	bool life;
public:
	void Eat();

	char* GetNameHerbivore() const;
	float GetWeight() const;
	bool GetLife() const;


	void SetNameHerbivore(const char*);
	void SetWeight(float);
	void SetLife(bool);
};