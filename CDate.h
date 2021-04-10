#ifndef CDATE2_H
#define CDATE2_H


#include <string>

using namespace std;



class CDate2
{
    public:

    // Nom :CDate  Constructeur
    // Rôle : Initialise la date
    // Sortie : la date créée


    CDate2(int annee, int mois, int jour, int heure, int minute, int seconde, string nom_jour);

    // Nom : getDate
    // Rôle : Récupére la valeur du jour, mois, année, heure, minutes, secondes et le nom du jour de la date. C'est un accesseur
    // Paramètre d'entrée : la date de la méthode
    // Sortie : l'année, le mois, le jour,  l'heure, la minute, la seconde, le nom du jour

    void getDate(int& a, int& m, int& j, int& h, int& mn, int& s, string& Njour);

    // Nom : Operator
    // Rôle : Permet de comparer deux dates pour savoir si elles sont égales, de savoir si une date est postérieure ou antérieure à une autre
    // Paramètre d'entrée : la date qui est appelée par la méthode et la date qu'on fait la comparaison
    // Sortie : c'est un booléen qui indique si les deux dates sont égales, inférieures ou supérieures


    bool operator > (CDate2 d);

    bool operator < (CDate2 d);

    bool operator == (CDate2 d);




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


