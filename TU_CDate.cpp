//********************************************************
// Auteur : MP Pinaud
// date : 19/03/2021
// fichier: TU_CDate.cpp
// Programme de test unitaire de la classe CDate
// Difficult� C
//********************************************************

#include "../include/CDate.h"
#include <iostream>
using namespace std;



void test_constructeur();
void test_egal();
void test_constructeurSansParametre();
void test_sup();
void test_inf();
void test_incrementerSec();
void saisirDate(int &j, int &m, int &a, int &s, int &mn, int &h, string &NJour);
void afficherDate(CDate &d);

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
// R�le :	permet de saisir les informations d'une date
// Param�tres de sortie : le jour, mois, ann�e, secondes, minutes, heures saisies
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
// R�le :	affiche la date pass�e en param�tre
// Param�tre d'entr�e : la date � afficher
//***************************************************************
void afficherDate (CDate &d)


{
int j,m,a;

    // Affichage de la date sous la forme jour/mois/annee

    cout << "Jour :";
	cin >>j;

	cout << "Mois :";
	cin >>m;

	cout << "Annee :";
	cin >>a;

}


//**************************************************************
// Fonction:test_constructeur
// R�le :	teste le constructeur et affiche la date  � l'aide des m�thodes d'acc�s
//***************************************************************

void test_constructeur()

{
	int j,m,a,s,mn,h;
	string NJour;

	cout << "Test du constructeur de la classe CDate:" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Saisir la date utilisee pour tester" << endl;

    saisirDate(j,m,a,s,mn,h,NJour);


	// Cr�ation de la date

	CDate d(a,m,j,h,mn,s,NJour);


	// Affichage de la date sous la forme jour/mois/annee

    cout << "Jour :";
	cin >>j;

	cout << "Mois :";
	cin >>m;

	cout << "Annee :";
	cin >>a;

}

//**************************************************************
// Fonction:test_constructeur
// R�le :	teste le constructeur sans param�tre de la classe CDate
//***************************************************************

void test_constructeurSansParametre()
{
    int a,m,j,h,mn,s;
    string NJour;

	cout << "Test du constructeur sans parametre de la classe CDate:" << endl;
	cout << "-------------------------------------------------------" << endl;

	// Cr�ation de la date
	CDate d(a,m,j,h,mn,s,NJour);


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
// R�le :	teste de l'op�rateur == de la classe CDate
//***************************************************************
void test_egal()
{
	int j, m, a,s,mn,h;
	string NJour;
	cout << "Test de la m�thode isEqual de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

	// Cr�ation de la 1�re date
	CDate d1(a,m,j,h,mn,s,NJour);

	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

    // Cr�ation de la 2�me date

	CDate d2(a,m,j,h,mn,s,NJour);



	// Comparer les deux dates avec == et afficher le r�sultat de la comparaison

	if (d1 == d2)
    {
        cout << "Les deux dates sont �gales " << endl;
    }
    else
    {
        cout << "Les deux dates ne sont pas �gales " << endl;
    }
}

//**************************************************************
// Fonction:test_sup
// R�le :	teste de l'op�rateur >  de la classe CDate
//***************************************************************

void test_sup()
{
	int j, m, a,s,mn,h;
	string NJour;
	cout << "Test de la m�thode isLater  de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

	// Cr�ation de la 1�re date
	CDate d1(a,m,j,h,mn,s,NJour);

	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

	// Cr�ation de la 2�me date
	CDate d2(a,m,j,h,mn,s,NJour);

	// Comparer les deux dates avec > et afficher le r�sultat de la comparaison
	if (d1 > d2)
    {
        cout << "La 1�re date est la plus grande " << endl;
        cout << "La 2�me date est la plus petite " << endl;
    }
    else
    {
        cout << "La 2�me date est la plus grande " << endl;
        cout << "La 1�re date est la plus petite " << endl;
    }
}


//**************************************************************
// Fonction:test_inf
// R�le :	teste l'op�rateur < de la classe CDate
//***************************************************************

void test_inf()
{
	int j, m, a,s,mn,h;
	string NJour;
	cout << "Test de la m�thode isEarlier de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

	// Cr�ation de la 1�re date
	CDate d1(a,m,j,h,mn,s,NJour);



	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h,NJour);

	// Cr�ation de la 2�me date
	CDate d2(a,m,j,h,mn,s,NJour);


	// Comparer les deux dates avec > et afficher le r�sultat de la comparaison
	if (d1 > d2)
    {
        cout << "La 1�re date est la plus grande " << endl;
        cout << "La 2�me date est la plus petite " << endl;
    }
    else
    {
        cout << "La 2�me date est la plus grande " << endl;
        cout << "La 1�re date est la plus petite " << endl;
    }

}

//**************************************************************
// Fonction:test_incrementerSec
// R�le :	teste la la m�thode incr�menterSec de la classe CDate
//***************************************************************
void test_incrementerSec()
{
	int j, m, a, h, mn, s;
	cout << "Test de la m�thode incrementerSec de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;








}
