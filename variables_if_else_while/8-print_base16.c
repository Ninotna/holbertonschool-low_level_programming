#include <stdio.h>

/**
 * main - function main random
 *
 * Return: 0
 */

int main(void)
{
	char digits[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 10; ++i)
	{
		(i > 9 && i <= 16) ? putchar('0' + digits[i]) : putchar(digits[i]);
	}
	putchar('\n');
	return (0);
}
