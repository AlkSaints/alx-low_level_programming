#include "main.h"
/**
 * print_last_digit - entry point
 * @n:  number being checked for l
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
