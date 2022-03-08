#include <stdio.h>
int main(void){
    int na,nb;
    puts("2つの整数を入力してください。");
    printf("整数A:");
    scanf("%d",&na);
    printf("整数B:");
    scanf("%d",&nb);
    printf("それらの平均は%dです。\n",(na+nb)/2);
    return(0);
}