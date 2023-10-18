#include "main.h"
/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void);
int main(void)
{
    print_alphabet(void);
    return (0);
}


void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		++ch;
	}
	_putchar('\n');

	return ;
}
