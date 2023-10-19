#include "main.h"
#include <string.h>

/**
 **_strcat - this is concatenating two strings
 *@dest: the string to be concatenated
 *@src: the string that will be concatenated
 *
 *Return: dest.
 **/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
