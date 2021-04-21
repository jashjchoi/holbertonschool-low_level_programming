#include "search_algos.h"
/**
* linear_search - search the first ocurrency of a value in the array
* @array: set of numbers to search in
* @size: size of the array
* @value: value to search for
* Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
