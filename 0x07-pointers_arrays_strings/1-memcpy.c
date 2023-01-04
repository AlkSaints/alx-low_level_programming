#include "main.h"
/**
 * _memcpy - copies memory data
 * @dest: memory data to be copied to
 * @src: to be copied from
 * @n: size of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (x < 0; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
