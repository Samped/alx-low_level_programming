#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y;
	char *start = accept;

	while (*s)
	{
		y = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				x++;
				y = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (y == 0)
			break;
	}
	return (x);
}
