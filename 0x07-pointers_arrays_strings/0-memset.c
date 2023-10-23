#include"main.h"
#include <string.h>

/**
 **_memset - this is writing a function that fills memory with constant byte
 *@s: is the array
 *@b: this is that will be printed
 *@n: this is the numbers
 *Return: s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n * sizeof(s[0]));
	return (s);
}
