#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @car : integer
 * Return: 1 or 0
 */

int _isupper(int car)
{
	if (car >= 'A' && car <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
