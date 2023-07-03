#include "main.h"

/**
 * _memcpy - copies @n bytes from memory @src
 * to @dest
 *
 * @n: copy function
 *
 * @src: bytes form memory area
 *
 * return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src = i);
	}

	return dest;
}
