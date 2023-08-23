#include "main.h"

/**
 *_puts -chek code
 *@str:string of caraters
 *return: void
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}
