#include "main.h"

/**
 *islower - Checks for lowercase letter
 *
 * Return: 1 for lowercase letter or 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

