#include <stdio.h>
/**
 * main - Entry point(c)
 *
 * Description: uppercase and lower case letters
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
		return (0);
}
