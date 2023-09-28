#include "main.h"

/**
  * natural_sqrt - Makes possible to evaluate from 1 to n
  * @a: same number as n
  * @e: number that iterates from 1 to n
  * Return: On success 1
  */

int natural_sqrt(int a, int e)
{
	if (e * e == a)
		return (e);
	else if (e * e > a)
		return (-1);
	return (natural_sqrt(a, e + 1));
}

/**
  * _sqrt_recursion - returns the natural square root of n
  * @n: Number Integer
  * Return: On success 1
  */

int _sqrt_recursion(int n)
{
	return (natural_sqrt(n, 1));
}
