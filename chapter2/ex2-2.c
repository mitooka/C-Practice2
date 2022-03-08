#include <stdio.h>
int main(void){
    int a,b;
    puts("2つの整数を入力してください。");
    printf("整数A:");
    scanf("%d",&a);
    printf("整数B");
    scanf("%d",&b);
    printf("それらの和は%dで積は%dです。",a+b,a*b);
}