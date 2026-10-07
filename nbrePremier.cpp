/*
  ------------------------------------------------------------------------------
  Fichier     : nbre_1er.cpp
  Auteur(s)   : Bron Tenakor
  Date        : 07/10/2026

  But         : identifier tous les nombres premiers compris
                et une valeur choisie par l'utilisateur

  Remarque(s) : les erreurs de saisie ne sont pas vérifiées

  Compilateur : gcc
  ------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    const short int n_col = 5;
    int limite;
    char bStart_again;
    // ensure user typed valid input
    do {
        // manage user input
        cout << "Entrez une valeur [2-1000] : " << endl;
        cin >> limite;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "voici la liste des nombres premiers: " << endl;

        int nb_of_pnumber = 0;
        for (int i = 1; i < limite; ++i) {
            // i being the current number between 1-user_number
            // we are working on
            int nb_of_dividers = 0;
            for (int j = 1; j<=i; ++j) {
                // we are checking here if i is dividable by j.

                // if i has already more than 2 dividers,
                // we dont need to check further, hes not a pn anyway.
                if (nb_of_dividers>=3) {
                    continue;
                }
                if (i%j==0) {
                    nb_of_dividers++;
                }
            }
            if (nb_of_dividers==2) {
                nb_of_pnumber++;
                cout <<setw(10)<< i ;
                if (nb_of_pnumber%n_col==0) {
                    cout << endl;
                }
            }
        }
        if (nb_of_pnumber == 0) {
            cout << limite << " est un nombre premier." <<endl;
        }
        // ask user if retry
        do {

            cout <<endl<<endl<< "Voulez-vous recommancer [O/N] : " <<endl;
            cin >> bStart_again;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        // ensure user types `O` or `N`.
        while (bStart_again!='O' && bStart_again!='N');
    }while ((limite <2 || limite >1000) || (bStart_again == 'O'));

    return 0;
}
