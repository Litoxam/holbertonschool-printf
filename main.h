#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/*structure*/


/**
 * struct specifier - Struct matching a format token to a print function.
 * @specifier: The format token
 * @f: The function pointer to handle the printing.
 */

typedef struct specifier
{
	char *specifier;
	int (*f)(va_list);
} specifier;




/*prototypes*/

int _printf(const char *format, ...);
int _putchar(char c);

/*print functions*/

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int recursive_int(unsigned int n);

#endif
