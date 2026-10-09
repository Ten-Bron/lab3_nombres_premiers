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
    char start_again;
    // ensure user typed valid input
    do {
        // manage user input
        cout << "Entrez une valeur [2-1000] : " << endl;
        cin >> limite;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "voici la liste des nombres premiers: " << endl;
        int nb_of_pnumber = 0;
        for (int i = 2; i < limite; ++i) {
            // i being the current number between 1-user_number
            // we are working on
            bool bIs_a_prime_number = false;
            for (int j = 2; j<i; ++j) {
                // THIS BLOC: we are checking here if i is dividable by j.
                // if i has already more than 2 dividers,
                // we dont need to check further, hes not a pn anyway.
                // also, we dont need to check every numbers that are >i/2, the smallest possible
                // divider of any number beside 1 is 2 anyway.
                if (bIs_a_prime_number || j>i/2) {
                    continue;
                }
                // i is dividable by j, it is not a pn.
                if (i%j==0) {
                    bIs_a_prime_number = true;
                }
            }
            if (!bIs_a_prime_number) {
                nb_of_pnumber++;
                cout <<setw(10)<< i ;
                if (nb_of_pnumber%n_col==0) {
                    cout << endl;
                }
            }
        }
        if (nb_of_pnumber == 0) {
            cout << limite << " est lui-meme un nombre premier." <<endl;
        }
        // ask user if retry
        do {
            cout <<endl<<endl<< "Voulez-vous recommancer [O/N] : " <<endl;
            cin >> start_again;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        // ensure user types `O` or `N`.
        while (start_again!='O' && start_again!='N');
    }while ((limite <2 || limite >1000) || (start_again == 'O'));
    return 0;
}
