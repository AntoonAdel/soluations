#include "main.h"

/**
  * prim_nums - Makes possible to evaluate from 1 to n
  * @a: same number as n
  * @e: number that iterates from 1 to n
  * Return: On success 1
  */

int prim_nums(int a, int e)
{
	if (a == e)
		return (1);
	else if (a % e == 0)
		return (0);
	return (prim_nums(a, e + 1));
}

/**
  * is_prime_number - checks if a number is prime
  * @n: Number Integer
  * Return: On success 1
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prim_nums(n, 2));
}
