#include "main.h"

/**
 *
 */
void time_table(void)
{
	int a,b
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
			printf("%d", a * b);

		if (b < 9)
			printf(", ");
	}
	printf("\n");
}

