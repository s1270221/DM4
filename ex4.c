#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int n;
    int heads=0;
    int tails=0;
    
    char str[8];
    printf("あなたは誰ですか？ ");
    scanf("%s",str);
    printf("こんにちわ, %s\n",str);
    
    
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
    return 0;
}
