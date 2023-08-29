#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @b: a character
 * @n: number of bytes in array
 * Return: s
 * @s: pointerr ti s array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		s[i] = b;
	}

	return (s);

}
