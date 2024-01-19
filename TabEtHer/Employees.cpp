#include "Employees.h"
#include <iostream>

Employees::Employees() : nom(""), prenom(""), age(0) {}

Employees::Employees(string n, string p, int a) : nom(n), prenom(p), age(a) {}

Employees::~Employees() {}

void Employees::afficher() const {
	cout << "Nom: " << nom << ", Prenom: " << prenom << ", Age: " << age << ", Salaire: " << calculerSalaire() << endl;
}
