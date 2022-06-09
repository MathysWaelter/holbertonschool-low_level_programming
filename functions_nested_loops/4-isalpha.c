#include "main.h"
/**
 * _isalpha - Check Alphabetic
 * @c: var
 *
 * return: Always 0;
 */

int _isalpha(int c)
{
	int a = 0;
        char low;

        for (low = 'a'; low <= 'z'; low++)
        {
                if (low == c)
                        a = 1;
        }

	for (low = 'A'; low <= 'Z'; low++)
        {
                if (low == c)
                        a = 1;
        }

        return (a);
} 
