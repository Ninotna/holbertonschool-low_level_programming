#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - function main random
  *
  * Return: 0
  */

int main(void)
{
	int n;
	int last_digit;

	last_digit = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else if (n < 6 && !0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}
	return (0);
}
