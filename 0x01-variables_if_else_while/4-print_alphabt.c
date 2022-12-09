#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: lowercase except q and e
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k != 'q' && k != 'e')
		{
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
