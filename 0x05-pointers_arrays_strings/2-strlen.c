#include "main.h"

/**
 * _strlen - A function that prints the length
 * of a string
 * @s: An input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int lent = 0;

	while (s[lent] != '\0')
		lent++;
	return (lent);
}
