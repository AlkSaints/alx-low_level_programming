#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: character to be checked
 *
 * Return: 1 if c is alphabet and 0 if otherwise
 */
int _isalpha(int c);
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
