#include "main.h"
/**
 * *_realloc - function that reallocates memory
 *
 * @ptr: pointer
 * @old_size: old size that allocates
 * @new_size: new size that allocates
 *
 * Return: ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *point;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		point = malloc(new_size);
		if (point == NULL)
			return (NULL);
		return (point);
	}
	if (new_size > old_size)
	{
		point = malloc(new_size);
		if (point == NULL)
			return (NULL);
		for (; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)p + i);
		free(ptr);
	}
	return (point);
}

