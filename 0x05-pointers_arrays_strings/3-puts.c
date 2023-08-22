#include "main.h"

/**
 *_puts -chek code
 *@str:string of caraters
 *return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++
	}
	_putchar('\n');
}

