#include "main.h"
#include <unistd.h>

/**
 *
 */
void times_table(void)
{
    int a, b;

    for (a = 0; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            print_number(a * b);

            if (b < 9)
                write(1, ", ", 2);
        }
        write(1, "\n", 1);
    }
}
