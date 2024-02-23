#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Return: 9 times table
 */
void times_table(void)
{
	int row, col;

for (row = 0; row <= 9; row++)
{
	for (col = 0; col <= 9; col++)
	{
		int product = row * col;
/* Vérifier si le produit a un ou deux chiffres */
		if (product >= 10)
		{
			_putchar(product / 10 + '0'); /* Affiche le chiffre des dizaines */
			_putchar(product % 10 + '0'); /* Affiche le chiffre des unités */
		} else
		{
			_putchar(' '); /* Pour aligner les produits à 1 et 2 chiffres */
			_putchar(product + '0');
		}
		/* Espacer les colonnes avec ', ' */
		if (col < 9)
		{ /* pas de  ', ' après le dernier de la ligne */
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
}
