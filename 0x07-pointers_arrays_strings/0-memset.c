#include <main.h>
/**
 * *_memset - function that fills memory with a constant byte
 *
 * @n: number of bytes in array
 * Return : s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; n > 0 ; i++, n--)
	{
		s[i] = 'b';
	}

	return (s)

}
