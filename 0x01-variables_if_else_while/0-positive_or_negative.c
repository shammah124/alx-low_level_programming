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
	int dd;

	srand(time(0));
	dd = rand() - RAND_MAX / 2;
	if (dd > 0)
		printf("%d is positive\n", dd);
	else if (dd == 0)
		printf("%d is zero\n", dd);
	else
		printf("%d is negative\n", dd);
	return (0);
}
