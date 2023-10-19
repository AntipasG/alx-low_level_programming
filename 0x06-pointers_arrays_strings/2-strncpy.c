#include "main.h"
#include <string.h>

/**
 **_strncpy - Write a function that copies a string.
 *@dest: parameter 1
 *@src: parameter 2
 *@n: the number of byte
 *
 *Return: dest.
 *
 **/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
