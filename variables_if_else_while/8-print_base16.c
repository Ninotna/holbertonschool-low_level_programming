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

	for (i = 0; i < 16; ++i)
	{
		putchar(digits[i]);
	}
		putchar('\n');
		return (0);
}
