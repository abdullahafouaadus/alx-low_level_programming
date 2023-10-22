#include "main.h"

/**
* jack_bauer - prints every minute of the day
*/
void jack_bauer(void)
{
	int h = 0;

	int m = 0;

	while (h <= 23)
	{
		while (m < 60)
		{
			printf("%.2d:%.2d\n", h, m);
			m++;
		}
		h++;
		m = 0;
	}
}
