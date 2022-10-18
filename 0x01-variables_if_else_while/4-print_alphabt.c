#include <stdio.h>

/**
* main - Entry point
* Description: print all lowercase alphabets except e and q
* Return: Always zero (success)
*/

int main(void)
{
	char a_bet = 'a';

	while (a_bet <= 'z')
	{
		if ((a_bet != 'e') && (a_bet != 'q'))
		{
			putchar(a_bet);
		}
		a_bet++;
	} putchar('\n');

	return (0);
}
