#include <stdio.h>
int main(void){
    int a,b;
    printf("二つの整数を入力してください。\n");
    printf("整数A:");
    scanf("%d",&a);
    printf("整数B:");
    scanf("%d",&b);
    printf("Aの値はBの%d%%です。",100*a/b);
    return(0);
}