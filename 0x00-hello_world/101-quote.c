#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints using the write function
 *
 * Return: Always 1 (error)
 */

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, "
			 "2015-10-19\n";

	write(STDERR_FILENO, message, sizeof(message) - 1);

	return (1);
}
