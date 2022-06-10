#include "main.h"
/**
 * jack_bauer - Yes
 * Return: Always 0.
 *
 */

void jack_bauer(void)
{
	int Hours = 0;
	int Minutes = 0;

	while (Hours <= 24)
	{
		_putchar(Hours);
		_putchar(':');
		while (Minutes <= 60)
		{
			_putchar(Minutes);
			_putchar('\n');
			Minutes++;
		}
		Hours++;
	}
}


