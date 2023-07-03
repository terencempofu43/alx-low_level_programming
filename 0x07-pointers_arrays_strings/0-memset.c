#include "main.h"

/**
 * _memset - function fill the first @n bytes of memory area
 * pointer to by @s with the cinstant byte @b
 *
 * @n:bytes of the memory area pointed to by @s
 *
 * @s: the constant byte @b
 *
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	{
		*(s + i) = b;
	}
	return s;
}
