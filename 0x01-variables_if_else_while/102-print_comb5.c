#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	int a = 0, b = 0, c = 0, d = 0;
	int coma = 1;

	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				putchar(',');
				putchar(32);
			}
			putchar(a + '0');
			putchar(b + '0');
			putchar(32);
			putchar(c + '0');
			putchar(d + '0');
			coma = 0;
		}
