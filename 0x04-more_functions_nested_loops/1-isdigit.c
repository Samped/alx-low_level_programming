#include "main.h"

/*
 * _isdigit - check description
 * @c: input of numbers
 * description: checks whether the input is number or not
 * Return 1 if it's a number else 0
 */

int _isdigit(int c)
{
	char digit;
	int isdigit = 0;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
