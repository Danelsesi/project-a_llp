#include <stdio.h>
/**
* main - Entry point
* Description: prints all single digits of base 10 from 0
* Return: Always zero (0)
*/

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
