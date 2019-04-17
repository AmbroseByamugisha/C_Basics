#include <stdio.h>

/* count characters in input */

main()
{
    int nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%1d\n", nc);
}