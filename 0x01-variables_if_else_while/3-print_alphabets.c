#include <stdio.h>

/**
 * maain - Entry point
 *
 * Description: print in lowercase then in uppercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a'
	char CH = 'A'

	/*print a - Z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}

