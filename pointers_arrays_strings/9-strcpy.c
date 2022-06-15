#include "main.c"

/**
 * *_strcpy - main
 * @dest: var
 * @src: var
 */

char *_strcpy(char *dest, char *src)
{
        char temp;

	while ((temp = *dest++) != '\0')
		*src++ = *dest;

	return (0);
}
