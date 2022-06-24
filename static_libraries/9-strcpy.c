#include "main.h"

/**
 * *_strcpy - main
 * @dest: var
 * @src: var
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int temp;

	for (temp = 0; src[temp] != '\0'; temp++)
	{
		dest[temp] = src[temp];
	}
	dest[temp] = '\0';
	return (dest);
}
