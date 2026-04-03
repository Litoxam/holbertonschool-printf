#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/*structure*/

typedef struct specifier
{
	char *specifier;
	int (*f)(va_list);
} spec_t;




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
