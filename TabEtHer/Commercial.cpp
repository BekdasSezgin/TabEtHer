#include "Commercial.h"

Commercial::Commercial() : Employees(), salaireBase(0) {}

Commercial::Commercial(string n, string p, int a, double sb) : Employees(n, p, a), salaireBase(sb) {}

Commercial::~Commercial() {}
