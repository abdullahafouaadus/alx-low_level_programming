#ifndef MAIN_H
#define MAIN_H
#include <unistd.h> // Include <unistd.h> to declare the write function

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif
