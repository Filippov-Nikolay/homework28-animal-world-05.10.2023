#include "NorthAmerica.h"

using namespace std;

NorthAmerica::NorthAmerica() {
}

NorthAmerica::NorthAmerica(const char* c, float s, float t, float h) :
	Continent(c, s, t, h) {
}

void NorthAmerica::Print() {
	cout << "���������: " << continent << endl;
	cout << "�������: " << square << endl;
	cout << "�����������: " << temperature << endl;
	cout << "���������: " << humidity;
}
