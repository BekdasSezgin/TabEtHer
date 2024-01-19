// Vendeur.cpp
#include "Vendeur.h"

Vendeur::Vendeur(string n, string p, int a, int pr) : Commercial(n, p, a, 50, pr) {}

double Vendeur::calculerSalaire() const {
	return salaireBase + primes * 2; // 2 SNCoin par prime
}
