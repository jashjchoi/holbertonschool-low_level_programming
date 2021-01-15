#include "search_algos.h"
/**
* print_array - recursive function
* @array: set of numbers
* @left: left
* @right: right
* Return: none
*/
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	for (left = left; left < right; left++)
	{
		printf("%d, ", array[left]);
	}
	printf("%d\n", array[left]);
}

/**
* binary_search - search the first ocurrency of a value in the array
* @array: set of numbers to search in
* @size: size of the array
* @value: value to search for
* Return: the index where value is located, otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}

