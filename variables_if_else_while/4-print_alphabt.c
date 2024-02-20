#include <stdio.h>

/**
 * main - function main random
 *
 * Return: 0
 */

int main(void)
{
	int car; /* car for character*/

	for (car = 'a'; car <= 'z'; car++)
	{
		{
			while(car != 'q' || car != 'e')
			{
				putchar(car);
			}
		}
	}
		putchar('\n');
		return (0);
}
