#include "_printf.h"


/**
* _printf - displays a string, compared to a format struct
* @format: pointer to a string
* Return: Number of chars in the string
*/


int _printf(const char *format, ...)
{
	va_list args; /*our list of arguments*/
	int j; /*will help us navigating in the array of struct*/

	int i = 0; /*will help us navigating in the format string*/
	int counter = 0; /*counts the number of char in the string*/

	specifier array_of_struct[3] = { /*array of struct with specifier char*/
		{'c', print_char}, /*for a char*/
		{'s', print_string},/*for a string*/
		{'%', print_percent} /*for a percrent after another one*/
	};

	if (format == NULL) /*we check if the ini string is NULL*/
	return (-1);


	va_start(args, format);

	while (format[i] != '\0') /*we go on the loop until the end*/
	{
	if (format[i] != '%') /* if the char is diff than a % */
	{

		_putchar(format[i]);
		counter++;
	}


	else  /*if there is a %, we check the char after*/
	{
		i++;
		if (format[i] == '\0') /*if % is the last char of the string*/
			return (-1);

		j = 0;
		while (j < 3) /* we compare it with our array of struct*/
		{
			 /*if %[] == specifier[j]*/
			if (format[i] == array_of_struct[j].specifier)
			{
				counter += array_of_struct[j].f(args);
				break;/*we call the function linked to it*/
			}
			j++;
		}
	}

	i++;
	}
	va_end(args);
	return (counter);
}
