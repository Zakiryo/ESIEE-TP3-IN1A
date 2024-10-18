#include <stdio.h>
#define TAILLE 12

void affiche_tab(int *tab, int taille) {
    int i;
    for (i = 0; i < taille; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

int *creer_entiers() {
    int tab[TAILLE];
    int i;
    for (i = 0; i < TAILLE; i++)
        tab[i] = i + 1;
    return tab;
}

int main() {
    int copy[TAILLE];
    int *tab = creer_entiers();
    int i;
    for (i = 0; i < TAILLE; i++)
        copy[i] = tab[i];
    affiche_tab(copy,TAILLE);
    affiche_tab(tab,TAILLE);
    return 0;
}

/*
 * Ce code créer un tableau d'entiers de taille fixe (12), copie tous ses éléments dans un autre tableau de même
 * taille puis affiche les deux tableaux.
 *
 * Le warning est le suivant : function returns address of local variable
 * Il signifie que la fonction "creer_entiers" retourne l'adresse mémoire de "tab" et la variable locale est alors
 * détruite à la fin de la fonction. Il aurait fallut créer une procédure prenant le tableau en paramètre et lui
 * affectant les valeurs voulues au lieu de le retourner via une fonction.
 */
