#include "main.h"
/**
 * print_alphabet_x10 - print 10 times lowercase
 */
void print_alphabet_x10(void)
{
	int a;
	char c;

	for (a = 0; a <= 9; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
