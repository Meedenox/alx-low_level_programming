#include "main.h"
/**
 *print_line- check the cod
 *@n: number of _ in the line
 *return: void
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
