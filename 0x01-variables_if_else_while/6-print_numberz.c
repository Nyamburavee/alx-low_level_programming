#include <stdio.h>
#include <time.h>
/**
 * main - main function
 *
 * Return: always o
 */
int main(void)
{

	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}