#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - This prints alphabets function
* Desciption: print_alphabet_x10 desc here
* Return: 0
*/

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}

		putchar('\n');
	}
}
