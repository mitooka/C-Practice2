#include <stdio.h>
int main(void){
    int nA,nB,dif;
    printf("整数A");
    scanf("%d",&nA);
    printf("整数B");
    scanf("%d",&nB);
    dif = nA - nB;
    if(dif < -10 || dif >10){
        printf("それらの差は11以上です。");
    }
    else
        printf("それらの差は10以下です。");

    }