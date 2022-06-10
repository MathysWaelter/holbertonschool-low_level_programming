#include "main.h"
/**
 * jack_bauer - Yes
 * Return: Always 0.
 *
 */

void jack_bauer(void)
{
	int Hours = 0;
	int Minutes;
	while (Hours <= 23)
	{
		Minutes = 0;
		while (Minutes <= 59)
		{
			_putchar(Hours / 10 + '0');
			_putchar(Hours % 10 + '0');
			_putchar(':');
			_putchar(Minutes / 10 + '0');
			_putchar(Minutes % 10 + '0');
			_putchar('\n');
			Minutes++;
		}
		Hours++;
	}
}


