#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 *main - finds and prints the largest prime factor followed by newline
 *Return: Always (success)
 */

int main(void)

{
	long int i, max, n;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;
	printf("%ld\n", max);

	return (0);
}
