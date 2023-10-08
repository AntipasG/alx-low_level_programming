#include<stdio.h>

/**
 *main - void
 *
 *
 *
 *Return: 0
 **/

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar ('\n');
	return (0);
}
