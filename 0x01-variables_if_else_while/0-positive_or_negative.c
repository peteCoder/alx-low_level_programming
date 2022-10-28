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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);

	return (0);
}
