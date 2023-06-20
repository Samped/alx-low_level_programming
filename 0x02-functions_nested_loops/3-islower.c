#include "main.h"

/**
 * _islower - Check man islower
 * Description: function uses _putchar to print
 * @c: An input character
 * Return: 1 if is lowercase or 0 if it's uppercase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
