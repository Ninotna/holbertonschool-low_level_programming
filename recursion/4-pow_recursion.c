#include "main.h"
#include <stdio.h>

/**
* _pow_recursion - function computes x raised to the power y.
* @x: base number x
* @y: power of y
* Return: x to the power of y
*/

int _pow_recursion(int x, int y)
{

	int temp, result;
	/* Base case: if y is negative, return -1 (indicating error) */
	if (y < 0)
		return (-1);

	/* Base case: if y is 0, return 1 (x^0 = 1 for all x) */
	if (y == 0)
		return (1);

	/**
	* Recursive case: compute x^y recursively
	* Split the work in half by calculating x^(y/2)
	* and then squaring the result
	*/
	temp = _pow_recursion(x, y / 2);
	result = temp * temp;

	/* If y is odd, multiply by x one more time */
	if (y % 2 != 0)
		result *= x;

	return (result);
}



