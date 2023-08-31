#include "main.h"
/**
 * _print_rev_recursion- function tgat prints a string in reverse
 * @s: the first string
 * Return: void
 */


void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
