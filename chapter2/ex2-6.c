#include <stdio.h>
int main(void){
    int a,b;
    printf("身長を入力してください:");
    scanf("%d",&a);
    printf("標準体重は%.1fです。\n",(a-100)*0.9);
    return(0);

}