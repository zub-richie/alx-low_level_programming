#include <stdio.h>
#include "main.h"

/**
 * main - Outputs the name of the program
 *
 * @argc - The number of command line arguments
 * @argv - An array containing the program command line arguments
 *
 * Return: Always return 0
 */

int main(int argc __attribute__((unused)), char *argv)
{
	printf("%s\n", *argv);
	return (0);
}
