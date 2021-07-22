
#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array
 * @array: Array to convert
 * @size: Array size
 * Return: Pointer to tree or NULL
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *new = NULL;
	size_t i, j;

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
			if (array[j] == array[i])
				break;
		if (j == i)
			if (avl_insert(&new, array[i]) == NULL)
				return (NULL);
	}

	return (new);
}
