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
	int a;

	int lastnum;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	lastnum = a % 10;
	if (a % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", a, lastnum);
	else if (lastnum == 0)
		printf("Last digit of %d is %d and is 0\n", a, lastnum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", a, lastnum);
	return (0);
}
