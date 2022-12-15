#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: characyer being checked
 *
 * Return: 1 if char is letter, lowercase or upper
 * 0: if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
