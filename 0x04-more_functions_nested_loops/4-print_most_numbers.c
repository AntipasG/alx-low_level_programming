#include "main.h"

/**
 *
 *
 *
 *
 **/
void print_most_numbers(void)
{
	int a = 0;

	while(a <= 9)
	{
		if (a != 4 && a != 2)
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
