#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * we're printing"and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * followed by a new line and then returns 0 to indicate successful execution.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, text, sizeof(text) - 1);
	return (1);
}
