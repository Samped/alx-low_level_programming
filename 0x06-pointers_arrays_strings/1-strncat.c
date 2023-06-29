#include "main.h"


/**
 * _strncat - a function that concatenates two strings
 * @dest: An input string
 * @src: An input string
 * @n: An input string
 * Return: The resultant string of the concatenation.
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclent = 0, i = 0;
	char *destptr = dest, *start = src;

	while (*src)
	{
		srclent++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclent)
		n = srclent;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (destptr);
}
