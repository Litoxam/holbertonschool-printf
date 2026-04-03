#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <unistd.h>

typedef struct format_specifier
{
    char specifier;
    int (*func)(va_list);
} format_t;

int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_percent(va_list args);
int print_float(va_list args);

int _putchar(char c);


#endif