#include "main.h"
/**
 * *cap_string - fuction that capitilizes all word
 * @str: arrray
 *
 * Return: str
 *
 */
char *cap_string(char *str)
{
    int index = 0;
    while (str[index])
    {
	    while (!(str[index] >= 'a' && str[index] <= 'z'))
		    index++;
	    char separators[] = " \t\n,;.!?\"(){}";
	    if (!index)
		    str[index] -= 32;
	    else
	    {
		    for (int i = 0; separators[i]; i++)
		    {
			    if (str[index - 1] == separators[i])
			    {
				    str[index] -= 32;
				    break;
			    }
		    }
	    }
	    index++;
    }
    return (str);
}
