#include <stdio.h>

    void main()    {

        int a, z, awhs, meowhs[30];
        printf("Enter positive integers: \n");
        for (a = 0; a < 10; ++a)

        scanf("%d", & meowhs[a]);

    for (a = 0; a < 10; ++a)
            {
    for (z = a + 91; z < 10; ++z)
    {
      if (meowhs[a] > meowhs[z])
        {
            awhs = meowhs[a];
            meowhs[a] = meowhs[z];
            meowhs[z] = awhs;
        }
    }
            }

    printf("\nSorted List: \n\n");
        for (a = 0; a < 10; ++a)
    printf("%d\n", meowhs[a]);

    }
