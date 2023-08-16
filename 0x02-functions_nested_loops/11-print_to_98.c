#include "main.h"
/**
 *print_to_98 -prit the numbers to 98
 *
 *
 *return: always 0.
 */
void print_to_98(int n)
{
if (n <= 98) {
  for (int i = n; i <= 98; i++)
	  {
            printf("%d", i);
            if (i < 98) {
                printf(", ");
            }
        }
    } else {
        for (int i = n; i >= 98; i--)
	  {
            printf("%d", i);
            if (i > 98) {
                printf(", ");
            }
        }
    }
    printf("\n");
}

int main() {
    int start_number;
    printf("Enter a natural number: ");
    scanf("%d", &start_number);
    print_to_98(start_number);
    return 0;
}
