#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: possible combinations of aingle figit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10 ; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
