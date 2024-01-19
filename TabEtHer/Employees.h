#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <string>
using namespace std;

class Employees {
protected:
	string nom;
	string prenom;
	int age;

public:
	Employees();
	Employees(string nom, string prenom, int age);
	virtual ~Employees();

	virtual double calculerSalaire() const = 0;
	void afficher() const;
};

#endif // EMPLOYE_H


