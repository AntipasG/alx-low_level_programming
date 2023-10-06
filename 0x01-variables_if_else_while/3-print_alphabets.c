#include<stdio.h>

/**
 *main - void
 *
 *
 *
 *
 *Return: 0
 **/

int main(void)
{
	char m = 'A';
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
