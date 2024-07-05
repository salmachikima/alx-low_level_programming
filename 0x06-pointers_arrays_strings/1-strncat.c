#include "main.h"

/**
 * _strncat - fonction that concatinate two strings
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int sukuna;
	int lenght = strlen(dest);

	for (sukuna = 0 ; sukuna < n && *src != '\0' ; sukuna++)
	{
		dest[lenght + sukuna] = src[sukuna];
		src++;
	}
	dest[lenght + sukuna] = '\0';
	return (dest);
}
