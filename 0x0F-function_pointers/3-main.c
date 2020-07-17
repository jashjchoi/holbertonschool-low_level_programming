#include "3-calc.h"
/**
* main - main function for operators
* @argc: number (or length) of command arguments
* @argv: pointer to arguments
* Return: 0 if success, error and exit if function fails
*/
int main(int argc, char *argv[])
{
	int first_num, second_num;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first_num = atoi(argv[1]);
	f = get_op_func(argv[2]);
	second_num = atoi(argv[3]);

	if ((*argv[2] == '%' || *argv[2] == '/') && second_num == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(first_num, second_num));
	return (0);
}
