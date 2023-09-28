#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: Counts the number of parameters that go into main
  * @argv: Pointer of array of arguments
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	(void) argv;
		printf("%d\n", argc - 1);
	return (0);
}
