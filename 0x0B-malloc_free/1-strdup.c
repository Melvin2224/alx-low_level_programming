#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - A functions which duplicates a string in a different
 * memory and returns a pointer to that memory
 * @str: String to be duplicated
 *
 * Return: pointer to duplicated string memory
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	i = 0;
	if (str != NULL)
	{
		ptr = malloc((sizeof(char) * strlen(str)) + 1);
		if (ptr != NULL)
		{
			while (str[i])
			{
				ptr[i] = str[i];
				i++;
			}
			ptr[i] = '\0';
			return (ptr);
		}
	}
	else
	{
		return (NULL);
	}
}
