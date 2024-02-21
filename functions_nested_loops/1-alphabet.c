#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	print_alphabet(ch);
	}
	puchar('\n');
	return (0);
}
