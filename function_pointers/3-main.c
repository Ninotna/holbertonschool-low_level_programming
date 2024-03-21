#include "3-calc.h"

/**
 * main - Entry point, performs simple operations.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, exits with 98, 99, or 100 on error.
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
