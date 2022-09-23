#include "main.h"
#include <string.h>


/**
 * _strcmp - This function ompares two strings based on
 * their length
 * @s1: Pointer pointing to the first string to be compared
 * @s2: pointer pointing to the second string to be compared
 *
 * Return: returns 15 if s1 > s2, -15 if s1 < s2,
 * 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
