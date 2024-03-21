#include "3-calc.h"
/**
* op_add -
* op_sub -
* op_mul -
*
*/

/* op_add: returns the sum of a and b. */
int op_add(int a, int b)
{
	return (a + b);
}

/* op_sub: returns the difference of a and b. */
int op_sub(int a, int b)
{
	return (a - b);
}

/* op_mul: returns the product of a and b. */
int op_mul(int a, int b)
{
	return (a * b);
}

/* op_div: returns the result of the division of a by b. */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	} else
	{
		/* Handle division by zero if necessary*/
		printf("Error\n");
		exit(100);
	}
}

/* op_mod: returns the remainder of the division of a and b. */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	} else
	{
		/* Handle modulus by zero if necessary */
		printf("Error\n");
		exit(100);
	}
}

