#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: always (succes)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
