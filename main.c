#include "_printf.h"
#include <stdio.h>

int main(void)
{
    int age = 20;
    char lettre = 'A';
    double pi = 3.14;
    char *nom = "Lonie";

    _printf("Test simple\n");
    _printf("Entier : %d\n", age);
    _printf("Caractère : %c\n", lettre);
    _printf("Flottant : %f\n", pi);
    _printf("Chaîne : %s\n", nom);
    _printf("mélange : %d %c %s %f\n", age, lettre, nom, pi);
    printf("Vrai : %d %c %s %f\n", age, lettre, nom, pi);
    _printf("Moi  : %d %c %s %f\n", age, lettre, nom, pi);
    _printf("String NULL : %s\n", NULL);

    return 0;
}