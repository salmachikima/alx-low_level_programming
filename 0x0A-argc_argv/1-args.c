#include <stdio.h>
/**
 * main - program that print the number of arguments
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: always 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
