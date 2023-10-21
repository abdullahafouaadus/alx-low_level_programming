#include "main.h"

/**
 * _isalpha - function to check for
 *           characters
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is characters
 *         otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
