#include <stdio.h>
#include <stdlib.h>

    int main()  {

        FILE*awhs;
            char meowhs[100];
            int number;
            int n = 0;

    awhs = fopen("D:\\thisisText.txt", "a");
        printf("Input how many lines to be appended: ");
        scanf("%d", &number);

    if(number < n)
    {
        printf("That does not exist");
        return 0;
    }

    else if(number == 0)

    {
        printf("That does not exist");
    return 0;
    }

    else
        while(n<number)

    {
        scanf("%s", &meowhs);
        fprintf(awhs, "\n", meowhs);
        fputs(meowhs, awhs); ++n;
    }

        printf("Successful Data Entry!");
        fclose(awhs);
    return 0;

 }
