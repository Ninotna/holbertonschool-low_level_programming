#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n : n tables
 * Return: n times table
 */

void print_times_table(int n)
{
	int row, col;

	if (n < 15 || n > 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				int product = row * col;

				if (col != 0)
				{
					_putchar(','); /* Pour aligner les produits à 1 et 2 chiffres */
					_putchar(' '); /* Pour aligner les produits à 1 et 2 chiffres */
				}
				if (product >= 100)
				{
					_putchar(product / 100 + '0'); /* Affiche le chiffre des centaines */
					_putchar((product / 10) % 10 + '0'); /* Affiche le chiffre des dizaines */
					_putchar(product % 10 + '0'); /* Affiche le chiffre des unités */
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(' '); /* Pour aligner les produits à 1 et 2 chiffres */
					_putchar(product / 10 + '0'); /* Affiche le chiffre des dizaines */
					_putchar(product % 10 + '0'); /* Affiche le chiffre des unités */
				}
				else
				{
					_putchar(product + '0');
				}
			}
			_putchar('\n');
		}
	}
}


