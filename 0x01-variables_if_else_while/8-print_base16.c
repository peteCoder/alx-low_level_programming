#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Print a conditional expression
 * Description: Print a conditional expression
 * Return: 0
*/
int main(void)
{
	char ch;
	int n;

	ch = 'a';
	n = '0';

	while (n <= '9')
	{
		putchar(n);
		n = n  + 1;
	};

	while (ch <= 'f')
	{
		putchar(ch);
		ch = ch + 1;
	};

	putchar('\n');
	return (0);
}
