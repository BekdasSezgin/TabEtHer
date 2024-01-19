#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "Employees.h"

class Commercial : public Employees {
protected:
	double salaireBase;

public:
	Commercial();
	Commercial(string nom, string prenom, int age, double salBase);
	virtual ~Commercial();

	virtual double calculerSalaire() const = 0;
};

#endif // COMMERCIAL_H

