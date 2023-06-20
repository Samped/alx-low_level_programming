#include "main.h"

/**
 *  _isalpha - Check man islower
 *  @c: An input character
 *  Description: function that uses _putchar to print
 *  Return: 1 if is lowercase or uppercase then 0 if it's otherwise
 */

int _isalpha(int c)
{
	char i,j;
	int letter = 0;

	for (i = 'a'; i <= 'z'; i++)
	{	
		for (j = 'A'; j <= 'Z'; j++)
		{
		if (i == c ||j == c)
			letter = 1;
		}
	}

	return (letter);
}
