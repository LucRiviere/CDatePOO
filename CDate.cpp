#include "CDate.h"
#include <string>

using namespace std;

CDate::CDate(int annee, int mois, int jour, int heure, int minute, int seconde, string nom_jour)
{
    this->annee = annee;
    this->mois = mois;
    this->jour = jour;
    this->heure = heure;
    this->minute = minute;
    this->seconde = seconde;
    this-> nom_jour = nom_jour;
}

bool CDate::operator > ( CDate d)

{
        return (this->annee > d.annee && this->mois > d.mois && this->jour >d.jour && this->heure > d.heure && this->minute >d.minute && this ->seconde > d.seconde && this-> nom_jour > d.nom_jour);
}

bool CDate::operator < ( CDate d)

{
        return (this->annee < d.annee && this->mois < d.mois && this->mois == d.mois && this->jour < d.jour && this->heure < d.heure && this->minute < d.minute && this ->seconde < d.seconde && this-> nom_jour < d.nom_jour);
}

bool CDate::operator == (CDate d)

{
        return (this->annee == d.annee && this->mois == d.mois && this->jour == d.jour && this->heure == d.heure && this->minute == d.minute && this->seconde == d.seconde && this->nom_jour == d.nom_jour);
}

void CDate::getDate(int& a, int& m, int& j, int& h, int& mn, int& sec, string& Njour)

{
    this->annee = a;
    this->mois = m;
    this->jour = j;
    this->heure = h;
    this->minute = mn;
    this->seconde = sec;
    this ->nom_jour = Njour;

}

CDate::~CDate()
{
    //dtor
}
