#include "main.h"
#include <stdio.h>

/**
 *reverse_array - this is the array that is going to be reversed
 *@a: this is the called array
 *@n: the number or length of the string
 *
 *
 **/

void reverse_array(int *a, int n)
{
	int h, temp;

	for (h = 0; h < n / 2 ; h++)
	{
	temp = a[h];
	a[h] = a[n - h - 1];
	a[n - h - 1] = temp;
	}
}
