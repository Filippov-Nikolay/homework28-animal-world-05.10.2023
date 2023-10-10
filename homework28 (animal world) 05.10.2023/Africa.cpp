#include "Africa.h"

using namespace std;

Africa::Africa() {
}

Africa::Africa(const char* c, float s, float t, float h):
	Continent(c, s, t, h) {}


void Africa::Print() {
	cout << "Континент: " << continent << endl;
	cout << "Площадь: " << square << endl;
	cout << "Температура: " << temperature << endl;
	cout << "Влажность: " << humidity;
}
