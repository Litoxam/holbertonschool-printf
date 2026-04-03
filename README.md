# holbertonschool-printf

## Description

A recreation of a "_printf" function that uses the standard C library for the real "printf" function. "_printf" is a simplified version of the C language's "printf" function.
It reads a formatted string, detects percent signs (%), and displays the corresponding values ​​using dedicated functions.
It handles essential formats such as "%c", "%s", "%d", "%f", and "%%".
The project uses "va_list", function pointers, and "write()" to display characters.

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