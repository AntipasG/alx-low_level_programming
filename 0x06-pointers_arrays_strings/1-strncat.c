#include "main.h"
#include <string.h>

/**
 **_strncat - Write a function that concatenates two strings.
 *@src: this is on parametre
 *@dest: the other parametre
 *@n: this is the n bytefrom src
 *Return: a pointer to the resulting string dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
