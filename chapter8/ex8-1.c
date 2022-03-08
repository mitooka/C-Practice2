#include <stdio.h>
 void saidai(int *a,int *b, int *c,int *max){
    if(*a>=*b){
        *max=*a;
    }
    else if(*b>=*c){
        *max = *b;
    }
    else if(*c>=*a){
        *max = *c;
    }
 }
 int main(void){
    int a,b,c,max=0;
    printf("3つの整数を入力してください。:\n");
    printf("整数A:");
    scanf("%d",&a);
    printf("整数B:");
    scanf("%d",&b);
    printf("整数C:");
    scanf("%d",&c);
    saidai(&a,&b,&c,&max);
    printf("最大値は%dです。",max);
    return(0);
 }
 