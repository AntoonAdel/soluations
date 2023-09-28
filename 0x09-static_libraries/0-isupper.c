#include "main.h"

/**
  * _isupper - function that checks for uppercase character.
  * @c: the character that wiil be checked.
  *Return: 1 if the c is uppercase
  *        0 if the c otherwise
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
