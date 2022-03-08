#include <stdio.h>
int main(void){
    int a,b;
    printf("二つの整数を入力してください。\n");
    printf("整数A:");
    scanf("%d",&a);
    printf("整数B:");
    scanf("%d",&b);
    if(a/b){
        printf("BはAの約数です。");
    }
    else 
         printf("BはAの約数ではありません。");
    return(0);
    
}