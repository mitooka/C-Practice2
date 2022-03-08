#include <stdio.h>
int main(void){
    int a;
    printf("整数を入力してください。:");
    scanf("%d",&a);
    printf("その数に12を加えると%dです。",a+12);
    return(0);
}