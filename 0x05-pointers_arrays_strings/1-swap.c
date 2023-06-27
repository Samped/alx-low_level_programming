#include "main.h"

/**
 * void swap_int - A function that swaps the values of the two
 * pointers that is a and b
 * @a: a pointer that stores the address of an interger
 * @b: a pointer that stores the adrres of an interger 
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
