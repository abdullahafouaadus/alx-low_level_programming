#include"main.h"

/**
* jack_bauer- prints every minute of the day
*/

void jack_bauer(void)
{
		for (int h = 0; h <= 24; h++)

	{
		for (int m = 0; m < 60 ; m++)

		{
			printf("%.2d:%.2d", h, m);
			printf("\n");
		}
	}
}
