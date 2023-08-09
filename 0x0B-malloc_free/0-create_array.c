#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char* ptr;
	unsigned int i;

	ptr = (char*) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
	
