#include "_printf.h"
#include <stdio.h>

int main(void)
{
    int age = 20;
	int n = 18;
	unsigned int n = 300;
	unsigned int val = 255;
	unsigned int val = 255;
	unsigned int val = 64;
    char lettre = 'A';
    double pi = 3.14;
    char *nom = "Marco";

    _printf("Test simple\n");
    _printf("Entier : %d\n", age);
    _printf("Caractère : %c\n", lettre);
    _printf("Flottant : %f\n", pi);
    _printf("Chaîne : %s\n", nom);
	_printf("Numéro : %i\n", n)
	_printf("%u\n", n);
	_printf("%x\n", val);
	_printf("%X\n", val);
	_printf("%o\n", val);
    _printf("mélange : %d %c %s %f\n", age, lettre, nom, pi);
    printf("Vrai : %d %c %s %f\n", age, lettre, nom, pi);
    _printf("Moi  : %d %c %s %f\n", age, lettre, nom, pi);
    _printf("String NULL : %s\n", NULL);
	printf("50%%\n");

    return 0;
}