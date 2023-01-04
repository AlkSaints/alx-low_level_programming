#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: var
 * @accept: var string
 *
 * Return: (s + i); (0)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accelt + j); j++)
		{
			if (*(s + i) == *(accelt + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
