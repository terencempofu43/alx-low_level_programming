#include "main"
/**
 * _strlen_recursion - prints thr lrnght of a string
 * @*s:string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlenrecursion(s + 1);

	}
	return i;
}
