#include <stdio.h>
int main(void){
    int num,dig,a;
    do{
        printf("非負の整数を入力してください。:");
        scanf("%d",&num);
    }while(num<0);
    a = num;
    dig = 0;
    do{
        a/=10;
        dig++;
    }while(a>0);
    printf("%dは%d桁です。\n",num,dig);
    return(0);
}