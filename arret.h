#ifndef ARRET_H_INCLUDED
#define ARRET_H_INCLUDED

#include <string>
#include <queue>

#include "tram.h"
#include "position.h"

using namespace std;

class Arret{

private:
    string d_nomArret;
    int d_tempsArret;
    Position d_positionArret;

    queue<Tram*> prochainsTrams;
public:
    Arret();
    Arret(const string& nom, int temps, Position& p);
    string nomArret() const;
    int tempsArret() const;
    Position positionArret() const;

    Tram* prochainsTrams(Ligne& l);
    void queueUpdate();
};

#endif // ARRET_H_INCLUDED
