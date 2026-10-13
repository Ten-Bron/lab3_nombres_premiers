Pseudo code:

Layer 1
1) debut programme
2) demande a l'utilisateur de saisir une entrée.
3) verifie si la saisie se trouve entre 2 et 1000 sinon relance le programme au point 1
4) saisie de l'entrée utilisateur
5) affiche tous les nombre premiers qui se situent entre 2 et le nombre saisi.
6) demande a l'utilisateur s'il veux relancer le programme
7) saisie de l'utilisateur
8) si la saisie est 'N', stopper le programme
9) si la saisie est 'O', relancer le programme au point 1).
10) sinon redemander une nouvelle saisie au point 5).
11) fin du programme.

LAYER 2 
1) debut de programme
2) affiche "Entrez une valeur [2-1000] : "
3) saisie de l'utilisateur
4) verifie is la saisie se trouve entre 2-1000, sinon relance le programme au point 1
5) pour chaque elements i se situant entre 2-1000, on va compter le nombre de ses diviseurs
6) pour chaque element j entre 2 et la moitié de l'element i, 
    on verifie si cet element j est diviseur de l'element i, si c'est le cas, on incremente
    le nombre de diviseur de 1.
7) si le nombre de diviseur est strictement superieur a 0, on affiche l'element i dans le terminal.
8) afficher:Voulez-vous recommancer [O/N] : 
9) saisie de l'utilisateur
10) si la saisie est 'N', stopper le programme 
11) si la saisie est 'O', relancer le programme au point 1).
12) sinon redemander une nouvelle saisie au point 9).
13) fin du progamme.