#include "_printf.h"

/**
 * print_char - Prints a character
 * @args: A list of arguments pointing to the character to be printed
 *
 * Return: The number of characters printed (always 1)
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - Prints a string
 * @args: A list of arguments pointing to the string to be printed
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (!str)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - Prints a percent sign
 * @args: A list of arguments (unused in this function)
 *
 * Return: The number of characters printed (always 1)
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
