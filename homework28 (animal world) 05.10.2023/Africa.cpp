#include "Africa.h"

using namespace std;

Africa::Africa() {
}

Africa::Africa(const char* c, float s, float t, float h):
	Continent(c, s, t, h) {}


void Africa::Print() {
	cout << "���������: " << continent << endl;
	cout << "�������: " << square << endl;
	cout << "�����������: " << temperature << endl;
	cout << "���������: " << humidity;
}
