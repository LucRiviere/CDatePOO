//********************************************************
// Auteur : MP Pinaud
// modifié par Luc RIVIERE
// date : 19/03/2021
// fichier: TU_CDate.cpp
// Programme de test unitaire de la classe CDate
// Difficulté C
//********************************************************
#include "../include\CDate2.h"
#include <iostream>
using namespace std;



void test_constructeur();
void test_egal();
void test_constructeurSansParametre();
void test_sup();
void test_inf();
void test_incrementerSec();
void saisirDate(int &j, int &m, int &a, int &s, int &mn, int &h, string &NJour);
void afficherDate(CDate2 &d);

int main ()

{


	int rep;
	do
	{
		cout << "Test de la classe CDate" << endl;
		cout << "**************************" << endl<< endl;

		cout << "Quelle methode voulez-vous tester ?" << endl;
		cout << "1 - Constructeur " << endl;
		cout << "2 - operateur ==" << endl;

		cout << "3 - Constructeur sans parametre" << endl;
		cout << "4 - operateur >" << endl;
		cout << "5 - operateur <" << endl;
		cout << "6 - incrementerSec" << endl;
		cout << "0 - Sortie du test de la classe CDate" <<endl;

		cin >> rep;

		switch (rep)
		{

			case 1 :	test_constructeur();
						break;
			case 2 :	test_egal();
						break;

            case 3 :	test_constructeurSansParametre();
						break;
			case 4 :	test_sup();
						break;
			case 5 :	test_inf();
						break;
            case 6:     test_incrementerSec();
						break;

			case 0 :	{
					cout << "Fin du test de la classe CDate" <<endl;
					cout << "*********************************" << endl;
							break;
						}
			default :	cout << "Erreur de saisie" <<endl;
						break;
		}
		cout <<endl << endl;
	} while (rep != 0);

	return 0;
}

//**************************************************************
// Fonction:saisirDate
// Rôle :	permet de saisir les informations d'une date
// Paramètres de sortie : le jour, mois, année, secondes, minutes, heures saisies
//***************************************************************
void saisirDate(int &j, int &m, int &a, int &s, int &mn, int &h, string &NJour)
{
    cout << "Saisir les informations de la date a creer" << endl;
	cout << "jour :";
	cin >>j;
	cout << "mois :";
	cin >>m;
	cout << "annee :";
	cin >>a;
	cout << "heure :";
	cin >>h;
	cout << "minutes :";
	cin >>mn;
	cout << "secondes :";
	cin >>s;
	cout << "nom du jour :";
	cin >> NJour;

}
//**************************************************************
// Fonction:afficherDate
// Rôle :	affiche la date passée en paramètre
// Paramètre d'entrée : la date à afficher
//***************************************************************
void afficherDate (CDate2 &d)
{
    int jour,mois,annee;

    // Affichage de la date sous la forme jour/mois/annee

    cout << jour << mois  << annee  <<endl;



}


//**************************************************************
// Fonction:test_constructeur
// Rôle :	teste le constructeur et affiche la date  à l'aide des méthodes d'accès
//***************************************************************

void test_constructeur()

{
	int j,m,a,s,mn,h;
	string NJour;

	cout << "Test du constructeur de la classe CDate:" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Saisir la date utilisee pour tester" << endl;

    saisirDate(j,m,a,s,mn,h,NJour);


	// Création de la date

	CDate2 d(a,m,j,h,mn,s,NJour);

    int jour,mois,annee;
	// Affichage de la date sous la forme jour/mois/annee

    cout << jour << mois << annee << endl;

}

//**************************************************************
// Fonction:test_constructeur
// Rôle :	teste le constructeur sans paramètre de la classe CDate
//***************************************************************

void test_constructeurSansParametre()
{
    int a,m,j,h,mn,s;
    string NJour;

	cout << "Test du constructeur sans parametre de la classe CDate:" << endl;
	cout << "-------------------------------------------------------" << endl;

	// Création de la date
	CDate2 d(a,m,j,h,mn,s,NJour);


	// Affichage de la date sous la forme jour/mois/annee

	cout << "Jour :";
	cin >>j;

	cout << "Mois :";
	cin >>m;

	cout << "Annee :";
	cin >>a;


}

//**************************************************************
// Fonction:test_egal
// Rôle :	teste de l'opérateur == de la classe CDate
//***************************************************************
void test_egal()
{
	int j, m, a,s,mn,h;
	string NJour;
	cout << "Test de la méthode isEqual de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

	// Création de la 1ère date
	CDate2 d1(a,m,j,h,mn,s,NJour);

	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

    // Création de la 2ème date

	CDate2 d2(a,m,j,h,mn,s,NJour);



	// Comparer les deux dates avec == et afficher le résultat de la comparaison

	if (d1 == d2)
    {
        cout << "Les deux dates sont égales " << endl;
    }
    else
    {
        cout << "Les deux dates ne sont pas égales " << endl;
    }
}

//**************************************************************
// Fonction:test_sup
// Rôle :	teste de l'opérateur >  de la classe CDate
//***************************************************************

void test_sup()
{
	int j, m, a,s,mn,h;
	string NJour;
	cout << "Test de la méthode isLater  de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

	// Création de la 1ère date
	CDate2 d1(a,m,j,h,mn,s,NJour);

	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

	// Création de la 2ème date
	CDate2 d2(a,m,j,h,mn,s,NJour);

	// Comparer les deux dates avec > et afficher le résultat de la comparaison
	if (d1 > d2)
    {
        cout << "La 1ère date est la plus grande " << endl;
        cout << "La 2ème date est la plus petite " << endl;
    }
    else
    {
        cout << "La 2ème date est la plus grande " << endl;
        cout << "La 1ère date est la plus petite " << endl;
    }
}


//**************************************************************
// Fonction:test_inf
// Rôle :	teste l'opérateur < de la classe CDate
//***************************************************************

void test_inf()
{
	int j, m, a,s,mn,h;
	string NJour;
	cout << "Test de la méthode isEarlier de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

	// Création de la 1ère date
	CDate2 d1(a,m,j,h,mn,s,NJour);



	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

	// Création de la 2ème date
	CDate2 d2(a,m,j,h,mn,s,NJour);


	// Comparer les deux dates avec < et afficher le résultat de la comparaison
	if (d1 < d2)
    {
        cout << "La 1ère date est la plus petite " << endl;
        cout << "La 2ème date est la plus grande " << endl;
    }
    else
    {
        cout << "La 2ème date est la plus petite " << endl;
        cout << "La 1ère date est la plus grande " << endl;
    }

}

//**************************************************************
// Fonction:test_incrementerSec
// Rôle :	teste la la méthode incrémenterSec de la classe CDate
//***************************************************************
void test_incrementerSec()
{
	int j, m, a, h, mn, s, NJour;
	cout << "Test de la méthode incrementerSec de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;








}

