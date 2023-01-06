#include "main.h"
/**
 * factorial - ret !n
 * @n: variable whose ! is returned
 *
 * Return: factorial
 */
int factorial(int n)
{
	int r = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	r *= factorial(n - 1);
	{
		return (r);
	}
}
