#include "main.h"
int _sqrt_recursion(int n);
int find_sqrt(int num, int root);
/**
 * find_sqrt - finds natural √ of a number
 * @num: var
 * @root: root of num
 *
 * Return: root
 */
int find_sqrt(int num, int root);
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root = num / 2)
	{
		return (-1);
	}
	return(find_sqrt(num, root + 1);
			}

			/**
			 * _sqrt_recursion - Entry
			 * @n: var
			 *
			 * Return: root
			 */
			int _sqrt_recursion(int n)
			{
			int root = 0;

			if (n < 0)
			{
			return (-1);
			}
			if ( n == 1)
			{
			return (1);
			}
			return (find_sqrt(n, root);
					}
