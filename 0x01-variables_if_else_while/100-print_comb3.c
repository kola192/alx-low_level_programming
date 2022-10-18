#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i,d;
	int n = 0;

	while (n < 1)
	{
		for (i = n; i < 9; i++)
		{
			for (d = i; d < 9; d++)
			{
				putchar(i + '0');
                        	putchar(d + '1');
                        	putchar(',');
                        	putchar(' ');
			}
		}


		n++;
	}
	putchar('\n');
	return (0);
}
