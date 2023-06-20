#include "main.h"

/**
 * _islower - Check man islower
 * Description: function uses _putchar to print
 * Return: 1 if is lowercase or 0 if it's uppercase
 */

int _islower(int c)
{
	char i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			j = 1;
	}

	return (j);
}
