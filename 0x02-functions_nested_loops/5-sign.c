#include "main.h"

/**
 * print_sign - Check Description
 * @n: An input number
 * Description: This function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}

	return (i);
}
