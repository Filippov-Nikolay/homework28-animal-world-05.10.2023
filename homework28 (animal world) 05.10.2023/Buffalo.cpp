#include "Buffalo.h"

using namespace std;

Buffalo::Buffalo(const char* n, float w, AnimalWorld* aw, Continent* c) {
	nameHerbivore = new char[strlen(n) + 1];
	strcpy_s(nameHerbivore, strlen(n) + 1, n);

	aw->AddHerbivore(this);

	life = true;
	weight = w;
	continent = c;
}

Buffalo::~Buffalo() { delete continent; }

char* Buffalo::GetContinent() const { return continent->GetContinent(); }

void Buffalo::Print() {
	cout << "����������: " << nameHerbivore << endl;
	cout << "���: " << weight << endl;
	cout << "������� �: " << continent->GetContinent() << endl;
	printf("������: %s", life == true ? "���" : "�� ���");
}
