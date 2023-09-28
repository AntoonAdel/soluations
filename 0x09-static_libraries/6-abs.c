#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @x: the input of the integer type
 * Return: the absolte value of the integer
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = (-1) * x;
	}
	return (x);
}
