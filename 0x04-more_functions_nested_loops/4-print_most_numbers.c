#include "main.h"
/**
 * print_most_numbers - Entry
 */
void print_most_numbers(void)
{
	int x;

	for (x >= 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar((x % 10) + '0');
		}
		_putchar(x + '0');
	}
}
