#include "tram.h"

tram::tram():
    d_AouM{false}, d_vitesse{10.0},d_sens{false},d_distanceSecurite{10.0},
    d_numLigne{0},d_tempsArret{-1},d_numArretSuivant{0},d_position{},
    d_tramSuiv{nullptr},d_arretSuiv{nullptr}
    {}

bool tram::getArretOuMarche() const
{
    return d_AouM;
}

double tram::getVitesse() const
{
    return d_vitesse;
}

bool tram::getSens()const
{
    return d_sens;
}

double tram::getDistanceSecurite()const
{
    return d_distanceSecurite;
}

int tram::getNumLigne()const
{
    return d_numLigne;
}

int tram::getTempsArret()const
{
    return d_tempsArret;
}

int tram::getNumArretSuivant()const
{
    return d_numArretSuivant;
}

position tram::getPosition()
{
    return d_position;
}

tram* tram::getTramSuivant()const
{
    return d_tramSuiv;
}

arret* tram::getArretSuivant()const
{
    return d_arretSuiv;
}



void tram::setArretOuMarche(bool AouM)
{
    d_AouM=AouM;
}

void tram::setVitesse(double vitesse)
{
    d_vitesse=vitesse;
}

void tram::setSens(bool sens)
{
    d_sens=sens;
}

void tram::setDistanceSecurite(double distanceSecurite)
{
    d_distanceSecurite=distanceSecurite;
}

void tram::setNumLigne(int numLigne)
{
    d_numLigne=numLigne;
}

void tram::setTempsArret(int tempsArret)
{
    d_tempsArret=tempsArret;
}

void tram::setNumArretSuivant(int numArretSuivant)
{
    d_numArretSuivant=numArretSuivant;
}

void tram::setPosition(double x,double y)
{

}

void tram::setTramSuivant(tram& tramSuivant)
{
    d_tramSuiv=&tramSuivant;
}

void tram::setArretSuivant(arret& arretSuivant)
{
    d_arretSuiv=&arretSuivant;
}
