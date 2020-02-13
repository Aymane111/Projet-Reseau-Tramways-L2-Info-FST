#include "arret.h"
#include <iostream>

using namespace std;

Arret::Arret():
    d_nomArret{" "}, d_tempsArret {0}, d_positionArret{p()}
{}

Arret::Arret(const string& nom, int temps, Position& p):
    d_nomArret{" "}, d_tempsArret {temps}, d_positionArret{p}
{}

string Arret::nomArret(){
    return d_nomArret;
}

int Arret::tempsArret(){
    return d_tempsArret;
}

Tram* Arret::prochainsTrams(const Ligne& l)
{
    /*
    renvoie les X prochains trams circulant sur la ligne l
        dans les deux sens ?
    Temps d'attente estimé à calculer à partir de la distance tram/arret

    */
}

void Arret::queueUpdate()
{
    /*
    Mise à jour de la file des trams en approche de la station
    ex:
    une fois un tram effectivement parti de la station,
    >suppression du tram de la file
    >ajout d'un nouveau tram dans la file

    */
}

