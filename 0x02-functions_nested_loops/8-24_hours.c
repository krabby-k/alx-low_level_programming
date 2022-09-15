#include "main.h"

/**
 * jack_bauer - prints every minr of the day of jack bauer
 * from 00:00 to 23:59
 * Return:0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remain;
	int mins_remain;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			mins_remain = minutes % 10;
			hours_remain = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remain + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remain + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
