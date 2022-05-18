#include <stdio.h>
#include <stdlib.h>

    int main()  {

        FILE * meowhs;
            int z, a;
            int id, math, science, english, sum = 0, average = 0;
            char name[100];

        char mwhs[100];
        char whs[20];

            printf("Input how many students to be appended: ");
            scanf("%d", & a);
      for (z = 0; z < a; z++)
    {
            printf("\nInput the file name: ");
            scanf("%s", whs);
    meowhs = fopen(whs, "w");
    fgets(mwhs, sizeof mwhs, stdin);
    fputs(mwhs, meowhs);

            printf("\nEnter student name: ");
                fgets(name, sizeof name, stdin);
            printf("Student ID Number:");
                scanf("%d", &id);
            printf("Math Grade:");
                scanf("%d", &math);
            printf("Science Grade:");
                scanf("%d", &science);
            printf("English Grade:");
                scanf("%d", &english);
            printf("Successful Date Entry!\n");

    sum = math + science + english;
    average = sum / 3;

      fprintf(meowhs, "\nStudent Name: %s", name);
      fprintf(meowhs, "\nStudent ID number: %d", id);
      fprintf(meowhs, "\nMath Grade: %d", math);
      fprintf(meowhs, "\nScience Grade: %d", science);
      fprintf(meowhs, "\nEnglish Grade: %d", english);
      fprintf(meowhs, "\nTotal grade: %d", sum);
      fprintf(meowhs, "\nGrade average: %d", average);
    }

    return 0;

    }
