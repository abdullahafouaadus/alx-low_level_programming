#include "main.h"

/**
* main -  prints _putchar, followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;

	char c[] = "_putchar\n";
		while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
		return (0);
}
