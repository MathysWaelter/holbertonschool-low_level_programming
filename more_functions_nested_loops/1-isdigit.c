#include "main.h"

/**
 * _isupper - Uppercase
 * @c: zz
 * Return: Always 0.
 *
 */

int _isdigit(int c)
{
	int a = 0;
	char up;

	for (up = '0'; up <= '9'; up++)
	{
		if (up == c)
			a = 1;
	}
	return (a);
}
