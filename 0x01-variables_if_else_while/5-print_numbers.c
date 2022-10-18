#include <stdio.h>

/**
* main - Entry point
* Description: prints all single digits of base 10
* Return: Always zero (success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	putchar('\n');

	return (0);
}
