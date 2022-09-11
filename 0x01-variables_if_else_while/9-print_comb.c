#include <stdio.h>


/**
 * main - This is where the program starts executing from
 *
 * Return: This always returns 0 to show that the proghram ran sucessfully
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
