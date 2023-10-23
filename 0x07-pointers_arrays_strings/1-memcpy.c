#include "main.h"
#include <string.h>

/**
 *_memcpy - this is copies of a memory address
 *@dest: the address to be coped
 *@src: the address copid in
 *@n: the numberes
 *
 *Return: dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n * sizeof(src[0]));
	return (dest);
}
