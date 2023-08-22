#include "main.h"
/**
 *swap_int - chek code
 *description : swaping the values of two integers
 *@a : integer n 1
 *@b : integer n2
 *
 *return : 0
 */

void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
