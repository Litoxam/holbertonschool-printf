#include "main.h"


/**
 * print_int - Prints an integer
 * @args: A list of arguments pointing to the integer to be printed
 *
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;

	if (n < 0)/*if n is below 0, we had a - before*/
	{
		_putchar('-');
		count++;
		num = -n; /
	}
	else
	{
		num = n;
	}

	count += recursive_int(num); /*recursion function*/

	return (count);
}

/**
 * recursive_int - Helper function to print digits using recursion
 * @n: The unsigned integer to print
 *
 * Return: Number of digits printed
 */
int recursive_int(unsigned int n)
{
	int count = 0;

	if (n / 10) /*it goes on until n is 0,x */
		count += recursive_int(n / 10);

	_putchar((n % 10) + '0'); /*we print the last digit*/
	/*The function calls itself until only one digit remains*/
	return (count + 1);
}
