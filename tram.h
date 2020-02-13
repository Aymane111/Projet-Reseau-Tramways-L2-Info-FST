#include "position.h"
#include "arret.h"

class tram
{
public:
    tram();
    bool getArretOuMarche() const;
    double getVitesse() const;
    bool getSens() const;
    double getDistanceSecurite()const;
    int getNumLigne() const;
    int getTempsArret()const;
    int getNumArretSuivant()const;
    position getPosition();
    tram* getTramSuivant()const;
    arret* getArretSuivant()const;

    void setArretOuMarche(bool AouM);
    void setVitesse(double vitesse);
    void setSens(bool sens);
    void setDistanceSecurite(double distanceSecurite);
    void setNumLigne(int numLigne);
    void setTempsArret(int tempsArret);
    void setNumArretSuivant(int numArretSuivant);
    void setPosition(double x,double y);
    void setTramSuivant(tram& tramSuivant);
    void setArretSuivant(arret& arretSuivant);

    double distanceTramSuivant()const;
    double distanceArretSuivat()const;
    bool doitSarreter();
    void arret();
    void avance();

private:
    bool d_AouM;
    double d_vitesse;
    bool d_sens;
    double d_distanceSecurite;
    int d_numLigne;
    int d_tempsArret;
    int d_numArretSuivant;
    position d_position;
    tram* d_tramSuiv;
    arret* d_arretSuiv;
};
