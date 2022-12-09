#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Two digit numvers(different ones)
 *
 * Return: Always 0
 */
int main(void)
{
	int n, c;

	for (n = 0; n < 10; n++)
	{
		for (c = 0; c < 10; c++)
		{
			putchar((n % 10) + '0');
			putchar((c % 10) + '0');
			if (n == 9 && c == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
