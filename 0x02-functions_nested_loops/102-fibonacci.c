#include <stdio.h>
/**
* main - Prints the sum of even-valued Fibonacci sequence
* terms not exceeding 4000000.
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, fiboSum;
	float totalSum;

	while (1)
	{
		fiboSum = fibo1 + fibo2;
		if (fiboSum > 4000000)
			break;
		if ((fiboSum % 2) == 0)
			totalSum += fiboSum;
		fibo1 = fibo2;
		fibo2 = fiboSum;
	}
	printf("%.0f\n", totalSum);
	return (0);
}
