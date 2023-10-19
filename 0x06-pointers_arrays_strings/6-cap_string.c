#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 **cap_string - this is a cap string
 *@a: the array that gets
 *
 *
 *Return: a
 **/

char *cap_string(char *a)
{
	char last;

	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
	last = a[i];
		if (last == ' ' || last == '\t' || last == '\n' || last == '.'
				|| last == ',' || last == ';' || last == '!' || last == '?'
				|| last == '"' || last == '(' || last == ')' || last == '{'
				|| last == '}')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
		if (a[0] > 97 && a[0] < 122)
			a[i] = toupper(a[i]);
	}
	return (a);
}
