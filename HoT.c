#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Who are you?\n");

    char name[100];
    scanf("%s", name);
    printf("Hello,%s!\n", name);

    printf("Tossing a coin...\n");

    int H = 0, T = 0;

    for(int i = 1; i < 4; i++){

        if(0 + rand() % 2 == 1){

            printf("Round %d: Heads\n", i);
            H++;

        }else{

            printf("Round %d: Tails\n", i);
            T++;

        }

    }

    printf("Heads: %d, Tails: %d\n", H, T);

    if(H > T) printf("%s won!\n", name);
    else printf("%s lost\n", name);

    return 0;

}
