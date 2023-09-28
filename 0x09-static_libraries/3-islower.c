#include "main.h"
/**
 *_islower - check if char is lowercase
 * Description: print
 * Return: 1 if 'c' lowercase (Success)
 *@c: is the char to be checked
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
