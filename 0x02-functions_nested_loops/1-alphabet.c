
/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
