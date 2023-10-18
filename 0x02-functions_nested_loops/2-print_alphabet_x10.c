#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 'a' to 'z' ten times.
 * Uses the _putchar function to output the characters.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			++ch;
		}

		_putchar('\n');  /* Print a newline after each repetition */
		++i;
	}
}
