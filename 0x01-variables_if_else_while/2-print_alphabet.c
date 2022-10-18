#include <stdio.h>

/**
 * main - Print all alphabetical chars in lowercase
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}

	return (0);
}
