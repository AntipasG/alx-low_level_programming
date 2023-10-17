#include "main.h"

/**
 *swap_int - this is swaping a two numbers value
 *@a: this is the first number
 *@b: the second number to be swaped
 *Return: void.
 **/

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
