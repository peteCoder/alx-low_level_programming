#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the multiplication of two integers
* @argc: argument count
* @argv: argument vector
* Return: 0 if true, 1 if false
<<<<<<< HEAD
*/                                                                                                                                  
int main(int argc, char *argv[])
{
    int a, b;
    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        printf("%d\n", a *b);
        return (0);
    }
    printf("Error\n");
    return (1);
=======
*/
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a *b);

		return (0);
	}

	printf("Error\n");

	return (1);
>>>>>>> 93b7f8f4c27ed4609a695b380478042d9bc0757b
}

