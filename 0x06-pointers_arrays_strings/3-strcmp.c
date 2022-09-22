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
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	if (s1 > s2)
		return (15);
	else if (s1 < s2)
		return (-15);
	else if (s1 == s2)
		return (0);
	return (0);
}
