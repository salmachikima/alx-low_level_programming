#include <stdio.h>
/**
 * main - main fonction
 *
 * Return: always 0
 */

int main(void)
{
	char s;

	for (s = 'a' ; s <= 'z' ; s++)
		if (s != 'e' && s != 'q')
		putchar(s);
	putchar('\n');
	return (0);
}
