#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**                                                                                          
 * main - entry point                                                                         
 *                                                                                           
 * Description: false or true                                                                  
 *                                                                                           
 * Return: 0 (end)                                                                          
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
          printf("%i is positive\n", n);
        else if (n == 0)
          printf("%i is zero\n", n); // Fixed typo: change 'print' to 'printf'
        else
          printf("%i is negative\n", n); // Fixed typo: change 'print' to 'printf'
        return (0);
}
