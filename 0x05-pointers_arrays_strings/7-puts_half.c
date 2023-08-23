#include "main.h"

/**
 * puts_half -chek code
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 * return: void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
