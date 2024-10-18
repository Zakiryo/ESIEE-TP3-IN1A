#include <stdio.h>

void affiche_tab(int *tab, int taille) {
    int i;
    for (i = 0; i < taille; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

void affiche_entiers(int n) {
    int tab[n];
    int i;
    for (i = 0; i < n; i++)
        tab[i] = i + 1;
    affiche_tab(tab, n);
}

int main() {
    affiche_entiers(0);
    return 0;
}

/*
 * Ce code créer un tableau d'une taille de 12 entiers, y place 12 entiers de 1 à 12 puis les affiches.
 * Il revient donc à afficher des entiers de 1 à n.
 *
 * Le warning est le suivant : ISO C90 forbids variable length array 'tab'
 * Il signifie que la taille du tableau "tab" est donnée par une variable alors qu'une valeur constante est attendue.
 */
