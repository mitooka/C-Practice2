#include <stdio.h>
int main(void){
    int no;
    printf("整数を入力してください。");
    scanf("%d",&no);
    switch (no%2)
    {
    case 0:
         printf("その数は偶数です\n");
        break;
    
    default:
        printf("その数は奇数です。\n");
        break;
    } 
    return(0);
}