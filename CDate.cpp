/*************************************************/
// Nom du projet: Date
// Nom du fichier: CDate.cpp
// Version : 1.0
// Nom du programmeur: Luc Rivière
// Date de création : 29/03/2021
// Rôle du fichier: Contient le code des méthodes de la date
// Nom des composants utilises: CDate.h
//                              string 
// Historique du fichier:
/*************************************************/
#include "CDate.h"
#include <iostream>
#include <string>
using namespace std;

    // Nom :CDate  Constructeur
    // Rôle : Initialise la date
    // Sortie : La date créée 

CDate::CDate(int annee, int mois, int jour, int heure, int minute, int seconde, string nom_jour)
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
    // Paramètre d'entrée : la date appelant la méthode
    // Sortie : l'année, le mois, le jour, le heure, la minute, la seconde, le nom du jour de la date

void CDate::getDate(int& a, int& m, int& j, int& h, int& mn, int& sec, string& NJour)
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
    // Paramètre d'entrée : La date appelant la méthode et la date dont on fait la comparaison
    // Sortie : C'est un booléen qui indique si les deux dates sont inférieures ou supérieures 

    bool CDate::operator > (const CDate d)
    {
        return (this->annee > d.annee);
    }
    bool CDate::operator < (const CDate d)
    {
        return (this->annee < d.annee);
    }
    bool CDate::operator == (const CDate d)
    {
        return (this->annee == d.annee && this->mois == d.mois && this->jour == d.jour && this->heure == d.heure && this->minute == d.minute && this->seconde == d.seconde && this->nom_jour == d.nom_jour);
    }
