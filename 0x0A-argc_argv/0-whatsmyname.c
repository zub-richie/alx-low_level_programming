#include <stdio.h>
#include "main.h"

/**
 * int main - This function count the number of string
 *
 * int argc - The string that'll be counted
 *
 * Return: Always return 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
