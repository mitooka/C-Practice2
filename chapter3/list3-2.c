#include <stdio.h>
int main(void){
    int a,a1;
    printf("整数を入力してください。\n");
    scanf("%d",&a);
    if(a>0){
        printf("絶対値は%dです。",a);
    }
    if(a<0){
        a = -a;
        printf("絶対値は%dです。",a);
    }
    return(0);
}