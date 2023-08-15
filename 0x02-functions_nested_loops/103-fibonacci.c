#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	unsigned long int n, k, next, sum;

	n = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (n < 4000000 && (n % 2) == 0)
		{
			sum = sum + n;
		}
		next = n + k;
		n = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}

