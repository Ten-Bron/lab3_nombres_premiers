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
using namespace std;

int main() {
    int user_number;
    // ensure user typed valid input
    do {
        // manage user input
        cout << "Entrez une valeur [2-1000] : " << endl;
        cin >> user_number;

        cout << "voici la liste des nombres premiers: " << endl;

        int nb_of_pnumber = 0;
        for (int i = 1; i < user_number; ++i) {
            int nb_of_dividers = 0;
            for (int j = 1; j<=i; ++j) {
                if ((i%j==0)) {
                    nb_of_dividers++;
                    //cout <<j <<" divise " <<i <<endl;
                }
            }
            if (nb_of_dividers==2) {
                nb_of_pnumber++;
                cout <<setw(10)<< i ;
                if (nb_of_pnumber%5==0) {
                    cout << endl;
                }
            }
        }


    }while (user_number <2 || user_number >1000);
    return 0;
}
