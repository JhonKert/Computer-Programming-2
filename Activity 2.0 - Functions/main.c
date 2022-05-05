#include <stdio.h>
#include <stdlib.h>

int main()
{
    //vars of floating-point number, which means it can obtain a number that has a decimal place.
    float PhilippineHistory, ComputerScience, Mathematics, Chemistry, PhysicalEducation,  avg;
    printf("Jhon Kert J. Talha\n\n\n");


    /*Prints marks obtained: along with scanf %f use to gather
    floating point numbers on users to be later on divided to
    get the average number*/

    printf("Enter marks obtained in Philippine History :");
    scanf("%f", &PhilippineHistory);
    printf("Enter marks obtained in Computer Science :");
    scanf("%f", &ComputerScience);
    printf("Enter marks obtained in Mathematics :");
    scanf("%f", &Mathematics);
    printf("Enter marks obtained in Chemistry :");
    scanf("%f", &Chemistry);
    printf("Enter marks obtained in Physical Education :");
    scanf("%f", &PhysicalEducation);


    /*Computes the average grade of all 5 subjects by using the floating
    point numbers gathered on scanf %f and divided by 5 subjects*/
    avg = (PhilippineHistory + ComputerScience + Mathematics + Chemistry + PhysicalEducation) / 5;
    // tells the printf method to print a floating point value
    printf("Average : %0.2f\n", avg);


    return 0;
}
