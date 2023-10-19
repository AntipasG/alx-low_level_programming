#include"main.h"
#include<ctype.h>

/**
 *string_toupper - code converting lowercase to upper.
 *@c: it is the parameter that i took
 *
 *
 *Return: c
 **/

char *string_toupper(char *c)
{
	char ch;

	int i = 0;

	while (c[i])
	{
		ch = c[i];
		c[i] = toupper(ch);
		i++;
	}
	return (c);
}
