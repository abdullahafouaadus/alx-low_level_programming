#include"main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the number to extract the last digit from
*
* Return: the last digit of the number
*/
int print_last_digit(int n)
{
	n %= 10;  /* Calculate the last digit */
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}

