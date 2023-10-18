#include "main.h"

/**
 *print_line - printing underscore lines
 *
 *Return: void
 **/

void print_line(int n)
{
	int a = 0;

	while(a <= n)
	{
		_putchar('_');
		a++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
