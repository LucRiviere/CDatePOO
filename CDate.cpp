#include "CDate2.h"
#include <iostream>
#include <string>
using namespace std;

    // Nom :CDate  Constructeur
    // Rôle : Initialise la date
    // Sortie : La date créée


CDate2::CDate2(int annee, int mois,int jour, int heure, int minute, int seconde, string nom_jour)
{
    this->annee = annee;
    this->mois = mois;
    this->jour = jour;
    this->heure = heure;
    this->minute = minute;
    this->seconde = seconde;
    this->nom_jour = nom_jour;
}

    // Nom : getDate
    // Rôle : indique la date en appelant la méthode, c'est un accesseur
    // Paramètre d'entrée : annee,mois,jour,heure,minute,seconde,nom du jour
    // Sortie : objet date

void CDate2::getDate(int& a, int& m, int& j, int& h, int& mn, int& sec, string& NJour)
{
    a= this->annee;
    m=this->mois;
    j= this->jour;
    h= this->heure;
    mn= this->minute;
    sec= this->seconde;
    NJour=this->nom_jour;
}
    // Nom : operator
    // Rôle : Permet de comparer deux dates pour savoir si elles sont égales ou de savoir si une date est postérieure ou antérieure à une autre,
    // Entrée : La date appelant la méthode et la date dont on fait la comparaison
    // Sortie : C'est un booléen qui indique si les deux dates sont inférieures ou supérieures

    bool CDate2::operator > (const CDate2 d)
    {
        return (this->annee > d.annee);
    }
    bool CDate2::operator < (const CDate2 d)
    {
        return (this->annee < d.annee);
    }
    bool CDate2::operator == (const CDate2 d)
    {
        return (this->annee == d.annee && this->mois == d.mois && this->jour == d.jour && this->heure == d.heure && this->minute == d.minute && this->seconde == d.seconde && this->nom_jour == d.nom_jour);
    }
