/*************************************************/
// Nom du projet: CDate
// Nom du fichier: CDate.h
// Version : 1.0
// Nom du programmeur: Luc Rivière
// Date de création : 29/03/2021
// Rôle du fichier: Contient les méthodes de la classe CDate
// Nom des composants utilises: string
// Historique du fichier:
/*************************************************/


#ifndef CDATE_H
#define CDATE_H
#include <string>

using namespace std;



class CDate
{
    public:

    // Nom :CDate  Constructeur
    // Rôle : Initialise la date
    // Sortie : la date créée


    CDate(int annee, int mois, int jour, int heure, int minute, int seconde, string nom_jour);

    // Nom : getDate
    // Rôle : Récupére la valeur du jour, mois, année, heure, minutes, secondes et le nom du jour de la date. C'est un accesseur
    // Paramètre d'entrée : la date de la méthode
    // Sortie : l'année, le mois, le jour,  l'heure, la minute, la seconde, le nom du jour

    void getDate(int& a, int& m, int& j, int& h, int& mn, int& s, string& Njour);

    // Nom : Operator
    // Rôle : Permet de comparer deux dates pour savoir si elles sont égales, de savoir si une date est postérieure ou antérieure à une autre
    // Paramètre d'entrée : la date qui est appelée par la méthode et la date qu'on fait la comparaison
    // Sortie : c'est un booléen qui indique si les deux dates sont égales, inférieures ou supérieures


    bool operator > (CDate d);

    bool operator < (CDate d);

    bool operator == (CDate d);


    virtual ~CDate();



    private:

        int annee;
        int mois;
        int jour;
        int heure;
        int minute;
        int seconde;
        string nom_jour;
};

#endif // CDATE_H

