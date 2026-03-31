#include "main.h"

/**
 * _putstr - Prints a string
 * @s: The string to be printed
 *
 * Return: The number of characters printed
 */
int _putstr(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
