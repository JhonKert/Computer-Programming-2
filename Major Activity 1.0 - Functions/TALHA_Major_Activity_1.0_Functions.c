#include<stdio.h>

    int main()  {

        int id, cnsmd;
        float chrg, srchg = 0, unit, total;

        printf("Input Customer ID:");
        scanf("%d", & id);
        printf("Unit consumed by the customer: ");
        scanf("%d", & cnsmd);

        if (cnsmd < 200)
            chrg = 1.50;
        else if (cnsmd >= 250 && cnsmd < 400)

            chrg = 1.60;
        else if (cnsmd >= 450 && cnsmd < 600)
            chrg = 1.85;
        else
            chrg = 2.00;
        unit = cnsmd * chrg;
            if (unit > 400)
        srchg = unit * 10 / 100.0;

        total = unit + srchg;
        if (total < 100)
        total = 100;

    printf("\n[Electricity Bill]\n");
    printf("Customer ID#                      : %d\n", id);
    printf("Unit Consumed                     : %d\n", cnsmd);
    printf("Amount Charges @P% .2f per unit   : P %.2f\n", chrg, unit);
    printf("Surchage Amount                   : P %.2f\n", srchg);
    printf("Total Customer Bill               : P %.2f\n", total);

    return 0;

    }
