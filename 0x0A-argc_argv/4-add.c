#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: 0 if right 1 if wrong
 */

int main(int argc, char **argv)
{
	int s = 0;
	char *r;

	while (--argc)
	{
		for (r = argv[argc]; *r; r++)
			if (*r < '0' || *r > '9')
				return (printf("Error\n"), 1);
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
