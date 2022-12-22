#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: var
 * @s2: var
 *
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
