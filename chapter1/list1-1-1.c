#include <stdio.h>
int main(void)
{
    int n1,n2;
    puts("三つの整数を入力してください。");
    puts("整数1:");   scanf("%d", &n1);
    puts("整数2:");    scanf("%d", &n2);
    /* puts("整数3:");    scanf("%d", &n3);*/
    printf("それらの和は%dです。", n1*n2);
    return(0);
}/* 演習問題1-9 */