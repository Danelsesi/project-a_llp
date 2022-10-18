#include <stdio.h>

/**
* main - Entry point
* Description: prints the alphabets in lowercase and then in uppercase
* Return: Always 0 (success)
*/

int main(void)
{
	char a_bet = 'a';
	char A_bet = 'A';

	while (a_bet <= 'z')
	{
		putchar(a_bet);
		a_bet++;
	} while (A_bet <= 'Z')
	{
		putchar(A_bet);
		A_bet++;
	}
	putchar('\n');

	return (0);
}
