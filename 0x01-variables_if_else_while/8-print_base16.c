#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	char small;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (small = 'a'; small <= 'f'; small++)
		putchar(small);
	putchar('\n');
	return (0);
}
