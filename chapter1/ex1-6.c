#include <stdio.h>
int main(void){
    int a;
    printf("整数値を入力してください:");
    scanf("%d",&a);
    printf("その数から6を減じると%dです。",a-6);
    return(0);
}