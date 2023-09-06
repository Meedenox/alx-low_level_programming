#include <stdlib.h>
#include "main.h"

/**
 * *_strdup -copies the string give, as parameter
 * @str: stringto duplicate
 * Return:ponter or Null
 *
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, leng;

	i = 0;
	leng = 0;
	if (str == NULL)
		return (NULL);
	while (str[leng])
		leng++;
	dup = malloc(sizeof(char) * (leng + 1));

	if (dup == NULL)
		return (NULL);
	while ((dup[i] = str[i] != '\0'))
		i++;
	return (dup);

}

