#include <stdio.h>
int main(void){
    int nA,nB,nC;
    printf("整数A:"); scanf("%d",&nA);
    printf("整数B"); scanf("%d",&nB);
    printf("整数C"); scanf("%d",&nC);
    if(nA==nB && nB==nC){
        printf("3つの値は等しいです。\n");
    }
    else if(nA == nB || nA==nC||nB==nC){
        printf("2つの値は等しいです。");
    }
    else
        printf("3つの値は異なります。");
    return(0);
}