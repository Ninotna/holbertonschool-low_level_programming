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
		if (i > 9 && i < 16)
		{
			putchar('0');
		}
		putchar(digits[i]);
	}
	return (0);
}
