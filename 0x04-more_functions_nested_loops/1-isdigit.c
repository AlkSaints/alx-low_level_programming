#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: digit being checked
 *
 * Return: 1(digit), 0(0therwise)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
