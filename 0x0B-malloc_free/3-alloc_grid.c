#include "main.h"
/**
 * alloc_grid - function that print two dimentional array
 *
 * @width: width
 * @height: height
 *
 * Return: pointer
*/


int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	ptr = malloc(sizeof(*ptr) * height);
	if (width <= 0 || height <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(sizeof(**ptr) * width);
			if (ptr[i] == 0)
			{
			while (i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
			}
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
	}
	return (ptr);

}
