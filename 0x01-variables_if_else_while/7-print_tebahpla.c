#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - entrypoint
 * Return: Always 0
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
