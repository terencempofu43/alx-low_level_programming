#include <stdio.h>

/**
 *
 * main - Prints numbers 0 to 9 amd letters a to f
 *
 * Return: Always 0 (succes)
 *
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	
	}
	for(i = 97; i< 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	retun (0);

}
