#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char c[] = "_putchar\n";

int i = 0;
int _putchar(char c)
{
	return (write(1, &c, 1));
}
