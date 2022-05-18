#include <stdio.h>
#include <string.h>

    int main()  {

        char mwhs[69];
        int z, t, whs, awhs, word;
        printf("Enter any String: ");
        gets(mwhs);

        whs = strlen(mwhs);
        word = whs - 1;
        printf("Reversed ordered words\n");

  	for(z = whs - 1; z >= 0; z--)
	{
		if(mwhs[z] == ' ' || z == 0)
		{
			if(z == 0)
			{
				awhs = 0;
			}
			else
			{
				awhs = z + 1;
			}
			for(t = awhs; t <= word; t++)
			{
				printf("%c", mwhs[t]);
			}
			word = z - 1;
			printf(" ");
		}
	}

    return 0;

    }
