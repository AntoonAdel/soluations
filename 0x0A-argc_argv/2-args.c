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
	int a;

	if (argc > 0)
	{
		for (a = 0; a < argc; a++)
		{
			printf("%s\n", argv[a]);
		}
	}

	return (0);
}
