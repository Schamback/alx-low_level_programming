#include <stdio.h>

/**
 * main -entry point
 *
 * Return: 0 on succes
 */

int main(void)
{
	int i = 0;
	int j;
	while (i < 5)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d\n");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
