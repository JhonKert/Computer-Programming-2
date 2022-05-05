#include <stdio.h>
#include <stdlib.h>

//this creates dual input to create id login and pin login

int auth(int acct[3][2], int id, int pin){
    int credentials = 0;
        for(int i=0; i<3; i++){
        if(id == acct [i][0] && pin == acct[i][1]){
        credentials = 1;
            }
        }
        return credentials;

        // this creates output conditions where verification is needed for account login
    }
    int main(){
        int acct[3][2] = {{12,123},{45,456},{78,789}};
            int id,pin;
            printf("Enter ID Number:  ");
            scanf("%d", &id);
            printf("Enter PIN:  ");
            scanf("%d", &pin);
                if(auth(acct,id,pin)){
                        printf("\n\nYou have successfully logged in\nID# = %d \n", id);

                }
                else {
                    printf("Invalid ID/PIN!");
                }
            return 0;
}


