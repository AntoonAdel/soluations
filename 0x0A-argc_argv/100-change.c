#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - prints the minimum number of coins to
  * make change for an amount of money
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: 0 (Success), 1 (Error)
  */

int main(int argc, char *argv[])
{
	int n, t, rslt;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	rslt = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (t = 0; t < 5 && n >= 0; t++)
	{
		while (n >= coins[t])
		{
			rslt++;
			n -= coins[t];
		}
	}

	printf("%d\n", rslt);
	return (0);
}
