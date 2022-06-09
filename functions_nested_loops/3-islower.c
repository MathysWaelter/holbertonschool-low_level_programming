#include "main.h"

/**
  * _islower - Print A-Z
  *
  * Return: Always 0 (Success)
  */

int _islower(int c)
{
	int a = 0;
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == c)
			a = 1;
	}

	return (a);
}
