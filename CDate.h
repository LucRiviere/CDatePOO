#ifndef CDATE_H
#define CDATE_H
#include <string>

using namespace std;



class CDate
{
    public:

    CDate(int annee, int mois, int jour, int heure, int minute, int seconde, string nom_jour);

    void getDate(int& a, int& m, int& j, int& h, int& mn, int& s, string& Njour);


    bool operator > (CDate d);

    bool operator < (CDate d);

    #ifndef CDATE_H
#define CDATE_H
#include <string>

using namespace std;



class CDate
{
    public:

    CDate(int annee, int mois, int jour, int heure, int minute, int seconde, string nom_jour);

    void getDate(int& a, int& m, int& j, int& h, int& mn, int& s, string& Njour);


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
