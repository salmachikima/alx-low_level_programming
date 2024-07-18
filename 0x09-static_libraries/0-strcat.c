#include "main.h"
/**
 * *_strcat - add the src to the dst
 * @src: source
 * @dest: destination
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dl = 0;
	int sl = 0;
	int sukuna;

	for (sukuna = 0 ; dest[sukuna] != '\0' ; sukuna++)
		dl++;
	for (sukuna = 0 ; src[sukuna] != '\0' ; sukuna++)
		sl++;

	for (sukuna = 0 ; sukuna <= sl ; sukuna++)
		dest[dl + sukuna] = src[sukuna];
	return (dest);
}
