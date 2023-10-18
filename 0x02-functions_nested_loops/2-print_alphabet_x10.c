#include "main.h"

/**
 * print_alphabet_x10 - utilizes the _putchar function to print
 * the alphabet a - z, repeated 10 times
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

        _putchar('\n');  // Print a newline after each repetition
        ++i;
    }
}
