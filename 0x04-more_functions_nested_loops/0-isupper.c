#include "main.h"

/**
 * _isupper - Check if the given character is an uppercase letter.
 * @c: Character to be tested
 *
 * Return: 1 if uppercase else 0 (False)
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
