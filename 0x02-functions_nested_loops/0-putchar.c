#include <unistd.h>
/*
*_puchar - priting the character

*desctiption:printall single characters
*main starting the print
*return the word
**/

void _putchar (char c) {
write(1, &c, 1)
}

int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}

