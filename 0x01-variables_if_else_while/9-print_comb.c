#include <stdio.h>

/**
 * main - prints all possibl combinations of single digit numbers followed by a and space
 *
 * Retun: Always 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++);
	{
		putchar(i);
		if (i != 57)
		{
		
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
