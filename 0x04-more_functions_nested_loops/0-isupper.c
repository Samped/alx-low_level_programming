#include "main.h"

/*
 * _isupper - check description
 * @c: is an input of alphabet
 * description: when the input alphabet is an uppercase it returns 1 else it will return  0
 */

int _isupper(int c)
{
	char uppercase;
	int isupper= 0;

	for(uppercase = 'A'; uppercase<= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}

	}
	return (isupper);
}
