#include "NorthAmerica.h"

using namespace std;

NorthAmerica::NorthAmerica() {
}

NorthAmerica::NorthAmerica(const char* c, float s, float t, float h) :
	Continent(c, s, t, h) {
}

void NorthAmerica::Print() {
	cout << "Континент: " << continent << endl;
	cout << "Площадь: " << square << endl;
	cout << "Температура: " << temperature << endl;
	cout << "Влажность: " << humidity;
}
