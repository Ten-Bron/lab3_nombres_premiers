LAYER 1:
Demander à l'utilisateur de saisir une valeur comprise entre 2 et 1000.
Lire la valeur saisie par l'utilisateur.
Vérifier si la valeur se situe entre 2 et 1000.
Si la valeur est inférieure à 2 ou supérieure à 1000, recommencer à l'étape 2.
Sinon, continuer à l'étape suivante.
Afficher tous les nombres premiers compris entre 2 inclus et la valeur saisie exclue.
Demander à l'utilisateur s'il souhaite recommencer le programme.
Lire la réponse de l'utilisateur.
Vérifier la réponse :
Si la réponse est 'N', terminer le programme.
Si la réponse est 'O', recommencer à l'étape 2.
Sinon, demander à nouveau une réponse à l'utilisateur.
Fin du programme.

LAYER 2:
Début du programme.
Déclarer les variables nécessaires :
limite : valeur saisie par l'utilisateur.
n_col : nombre de nombres premiers affichés par ligne, fixé à 5.
nb_of_pnumber : compteur du nombre de nombres premiers trouvés.
start_again : réponse de l'utilisateur concernant le redémarrage du programme.
i : nombre dont on vérifie s'il est premier.
j : diviseur potentiel du nombre i.
bIs_a_prime_number : indicateur permettant de déterminer si i possède un diviseur autre que 1 et lui-même.
Afficher le message : Entrez une valeur [2-1000] :
Lire la valeur saisie par l'utilisateur et la stocker dans limite.
Vérifier si limite est comprise entre 2 et 1000 inclus.
Si ce n'est pas le cas, revenir à l'étape 3.
Sinon, continuer.
Afficher le message : Voici la liste des nombres premiers :
Initialiser nb_of_pnumber à 0.
Pour chaque entier i allant de 2 jusqu'à limite - 1, effectuer les opérations suivantes :
Initialiser bIs_a_prime_number à FAUX.
Pour chaque entier j allant de 2 jusqu'à i - 1 :
Si bIs_a_prime_number vaut VRAI ou si j est strictement supérieur à la moitié de i, passer à l'itération suivante.
Sinon, vérifier si le reste de la division de i par j est égal à 0.
Si c'est le cas, affecter VRAI à bIs_a_prime_number, car i possède un diviseur autre que 1 et lui-même.
Après avoir parcouru les valeurs de j, vérifier la valeur de bIs_a_prime_number.
Si elle vaut FAUX, alors i est un nombre premier :
Incrémenter nb_of_pnumber de 1.
Afficher i sur le terminal, en réservant une largeur de 10 caractères.
Si nb_of_pnumber est divisible par 5, effectuer un retour à la ligne.
Sinon, ne rien afficher pour i.
Vérifier si nb_of_pnumber est égal à 0.
Si c'est le cas, afficher le message indiquant que limite est elle-même un nombre premier.
Afficher le message : Voulez-vous recommancer [O/N] :
Lire la réponse de l'utilisateur et la stocker dans start_again.
Vérifier la réponse saisie.
Si start_again est différente de 'O' et de 'N', revenir à l'étape 10.
Si start_again vaut 'N', terminer le programme.
Si start_again vaut 'O', revenir à l'étape 3.
Fin du programme.

