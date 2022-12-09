#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Checking the last digit
 *
 * return: Always 0 (compare to 5)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand () - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of", n ,"is", n % 10 ,"and is greater than 5\n");
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of", n ,"is", n % 10 ,"and is 0\n");
	}
	else ((n % 10) < 6 ! 0)
	{
		printf("Last digit of", n ,"is", n % 10 ," and is less than 6 and not 0\n");
	}
	return (0);
}

