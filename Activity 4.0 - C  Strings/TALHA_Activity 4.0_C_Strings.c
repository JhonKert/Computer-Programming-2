#include<stdio.h>
#include<string.h>

    int main() {

        char mwhs[250];
        int  j,vc,vowel,consonants;
        int length=0;
            printf("Input a sentence: ");

    fgets(mwhs, sizeof mwhs, stdin);
    while(mwhs[j]!='\0')

    {
        if(mwhs[j]=='a' ||mwhs[j]=='e' ||mwhs[j]=='i'
        ||mwhs[j]=='o' ||mwhs[j]=='u') mwhs[j]=mwhs[j]-32;

        j++;
    }

        printf("\nString Converted:");
        puts(mwhs);

    while(mwhs[length]!='\0')
    {   length++;   }

        vowel = 0;
        consonants = 0;
        vc = strlen(mwhs);

    for(j=0; j<vc; j++)
    {
        if(mwhs[j] =='a' || mwhs[j]=='e' || mwhs[j]=='i' || mwhs[j]=='o' || mwhs[j]=='u'
        || mwhs[j]=='A' || mwhs[j]=='E' || mwhs[j]=='I' || mwhs[j]=='O' || mwhs[j]=='U')

        {   vowel++;    }

        else if((mwhs[j]>='a' && mwhs[j]<='z') || (mwhs[j]>='A' && mwhs[j]<='Z'))

        {   consonants++;   }
    }

        printf("String Length: %d\n", length-1);
        printf("Vowel: %d\n", vowel);
        printf("Consonant: %d\n", consonants);

    return 0;

    }
