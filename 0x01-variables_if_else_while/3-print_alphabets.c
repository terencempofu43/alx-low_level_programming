#include<stdio.h>
/*
 * main - prints alphabet in lower and upper case
 *
 * Return: Always 0 (Succes)
 *
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

        for (i = 0; i < 53; i++);
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);



}
