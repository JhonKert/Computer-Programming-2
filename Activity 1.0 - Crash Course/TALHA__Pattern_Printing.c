#include <stdio.h>

    int main()  {

        int a, awhs, meowhs, z = 0;
        printf("Enter integer:");
        scanf("%d", &meowhs);
            for (a = 1; a <= meowhs; ++a, z = 0)
    {
            for (awhs = 1; awhs <= meowhs - a; ++awhs)
    {
        printf("  ");
    }

          while (z != 2 * a - 1)

    {
             printf("* ");
             ++z;
    }
          printf("\n");
    }
        return 0;

        }
