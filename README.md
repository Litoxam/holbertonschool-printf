# holbertonschool-printf

## Description

This is a recreation of a printf that uses the standard C library of the real printf.

_printf is a simplified version of the printf function of the C language.

The "_printf" function prints text to the standard output.

It reads a format string, detects the %, and displays the corresponding values thanks to dedicated functions.

It supports the format specifiers used by the "printf" function of the standard library.

It handles essential formats such as %c, %s, %d, %f and %%.

The project uses va_list, function pointers, and write() to print characters.

## Supported features

%c = displays a character

%s = displays a string of characters 

%d = display a integer

%f = displays a decimal number

%% = display a symbol pourcent


## Compilation

`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c `

## Exemple

_printf("Bonjour Holberton\n");

_printf("Nom : %s\n", "Marco");


## Author

Maxime Bernier et Lonie Meite.