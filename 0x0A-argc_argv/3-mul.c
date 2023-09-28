#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: Counts the number of parameters that go into main
  * @argv: Pointer of array of pointers containing strings entering main
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	int a, n;

	n = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		n = 1;
	}
	else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
	}

	return (n);
}
