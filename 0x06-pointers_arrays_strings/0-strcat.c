#include "main.h"

/**
 * _strcat - a function thatr concatenates two strings
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resultant string
 */

char *_strcat(char *dest, char *src)
{
	char *destp = dest;

	while(*dest)
		dest++;

	while(*src)
		*dest++ = *src++;

	destp = '\0';
	
	return(destp);
}
