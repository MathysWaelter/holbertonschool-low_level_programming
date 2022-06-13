#include "main.h"

/**
 * _isupper - Uppercase
 *
 * Return: Always 0.
 *
 */

int _isupper(int c)
{
	int a = 0;
	char up;

	for (up = 'A'; up <= 'Z'; up++)
	{
		if (up == c)
			a = 1;
	}
		
	return (a);
}
