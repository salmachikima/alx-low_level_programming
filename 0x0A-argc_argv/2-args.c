#include <stdio.h>

/**
 * main - print all thye arg that it receives
 * @argv: arguments vector
 * @argc: arguments count
 * Return: 0
 */

int main(int argc, char **argv)
{
	int s = 0;

	while (argc--)
	{
		printf("%s\n", argv[s]);
		s++;
	}
	return (0);
}
