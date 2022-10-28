#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_sign - This prints alphabets function
* @n: The character to print
* Desciption: print_sign desc here
* Return: 0
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	_putchar('-');
	return (-1);
}
