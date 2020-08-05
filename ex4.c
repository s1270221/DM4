#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int n;
    int heads=0;
    int tails=0;
    
    printf("Tossing a coin ...\n");

    for (i=0;i<3;i++){
        n=rand();
        if (n%2==0){
            printf("Raund %d: Head\n",i+1);
            heads++;
        }
        else {
            printf("Round %d: Tail\n",i+1);
            tails++;
        }
    }
    printf("Heads: %d, Tails: %d\n",heads, tails);
    
    if(heads>tails){
        printf("あなたの勝ちです\n");
    }
    else {
       printf("あなたの負けです\n"); 
    }
    
    return 0;
}
