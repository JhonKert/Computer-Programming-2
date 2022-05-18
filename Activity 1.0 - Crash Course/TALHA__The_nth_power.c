#include <stdio.h>

    int main()  {

        int q, w;
        int cal = 1.0;
      printf("Enter X value:");
            scanf("%d", &q);
      printf("Enter Y value:");
            scanf("%d", &w);

        while (w != 0)
            {   cal *= q; --w;  }

        printf("\nResult = %d\n", cal);
    return 0;

    }
