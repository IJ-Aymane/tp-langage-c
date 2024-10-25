#include <stdio.h>

int main() {
    int x = 10;      // D�claration d'une variable enti�re
    int *p;          // D�claration d'un pointeur de type int
    p = &x;          // Le pointeur p stocke l'adresse de la variable x

    // Afficher la valeur de x
    printf("Valeur de x: %d\n", x);

    // Afficher l'adresse de x en m�moire
    printf("Adresse de x: %p\n", (void*)&x);

    // Afficher la valeur du pointeur p (l'adresse de x)
    printf("Valeur du pointeur p (adresse de x): %p\n", (void*)p);

    // Afficher la valeur de x en utilisant le pointeur p
    printf("Valeur de x via le pointeur p: %d\n", *p);

    return 0;
}
