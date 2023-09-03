#include <stdio.h>
#include "main.h"

/**
 * main - print the number of element
 * @argc: number of elements
 * @argv: array
 *
 * Return:void
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

