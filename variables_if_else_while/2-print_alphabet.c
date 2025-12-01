#include <stdio.h>

int main(void)
{
	char s  = 'a';

	while(s < 'z')
	{
		putchar(s);
		s++;
	}

	putchar('\n');
	return (0);
}
