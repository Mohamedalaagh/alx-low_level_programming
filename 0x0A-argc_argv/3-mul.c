#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int x;

	if (i == 1 && i + 1 < argc)
	{
		int num1 = atoi(argv[i]);
		int num2 = atoi(argv[i + 1]);

		x = num1 * num2;
		printf("%d\n", x);
	}

	else
	{
		printf("Error\n");
	}
		return (0);
}
