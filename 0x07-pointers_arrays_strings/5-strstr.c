#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
		int k;

		while (*haystack)
		{
			for (k = 0; needle[k]; k++)
			{
			if (*haystack  == needle[0])
			return (needle);
			}
		haystack++;
		}

	return ('\0');
}

