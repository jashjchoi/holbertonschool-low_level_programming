#include "3-calc.h"
/**
* main - main function for operators
* @argc: number (or length) of command arguments
* @argv: pointer to arguments
* Return: 0 if success, error if fails
*/
int main(int argc, char *argv[])
{
	int first_num, second_num, output_num;
	char *operator;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
	}
	first_num = atoi(argv[1]);
	operator = argv[2];
	second_num = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
	}
	f = get_op_func(operator);
	output_num = f(first_num, second_num);
	printf("%d\n", output_num);
	return (0);
}
