<<<<<<< HEAD
 670 Bytes

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/** 
* check_num - check - string there are digit    
* @str: array str 
* Return: Always 0 (Success)
*/

int check_num(char *str)
{
    /*Declaring variables*/
    unsigned int count; 

    count = 0;
    while (count < strlen(str)) /*count string*/ 
    {
        if (!isdigit(str[count])) /*check if str there are digit*/
        {
            return (0);
        }
        count++;
    }

    return (1);
}                                                                                                                                    

/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments                                                                                                                  
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
    /*Declaring variables*/
    int count;
    int str_to_int;
    int sum = 0;

    count = 1;
    while (count < argc) /*Goes through the whole array*/
    {
        if (check_num(argv[count])) 
        {
            str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
            sum += str_to_int;
        }
        /*Condition if one of the number contains symbols that are not digits*/
        else
        {
            printf("Error\n");
            return (1);
        }
        
        count++;
    }

    printf("%d\n", sum); /*print sum*/

    return (0);
}
>>>>>>> 93b7f8f4c27ed4609a695b380478042d9bc0757b
