#include "main.h"
#include <unistd.h>

/**
 * main - writes the charaxter c to stdout
 * @c the cgaracter to print
 *
 * return: On success 1.
 * On error, -1 is returned  * On error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
