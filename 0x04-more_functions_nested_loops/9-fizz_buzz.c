#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int sukuna;

	for (sukuna = 1 ; sukuna <= 100 ; sukuna++)
	{
		if (sukuna % 3 == 0)
			printf("%s", "Fizz");
		else if (sukuna % 5 == 0)
			printf("%s", "Buzz");
		else if ((sukuna % 3 == 0) && (sukuna % 5 == 0))
			printf("%s", "FizzBuzz");
		else
			printf("%d", sukuna);
		if (sukuna != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

