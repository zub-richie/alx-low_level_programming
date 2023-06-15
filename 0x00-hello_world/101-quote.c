#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: 1 if successful.
 */

int main(void)
{
	char *c = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}

	return (1);
}
