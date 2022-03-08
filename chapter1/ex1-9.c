#include <stdio.h>
int main(void){
    int n1,n2,n3;
    printf("3つの整数を入力してください。:\n");
    printf("整数1\n"); scanf("%d",&n1);
    printf("整数2:\n"); scanf("%d",&n2);
    printf("整数3:\n"); scanf("%d",&n3);
    printf("それらの和は%dです。",n1+n2+n3);
    return(0);
}