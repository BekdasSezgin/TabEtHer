// Vendeur.h
#ifndef VENDEUR_H
#define VENDEUR_H

#include "Commercial.h"

class Vendeur : public Commercial {
public:
    Vendeur(string nom, string prenom, int age, int primes);
    virtual ~Vendeur() {}

    double calculerSalaire() const;
};

#endif

