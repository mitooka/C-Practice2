#include <stdio.h>
int main(void){
    int num,dig;
    do {
        printf("非負の整数を入力してください:"); scanf("%d",&num);
        if(num <0){
            printf("\a負の整数を入力してはいけません。");
        }
    }while (num<0);
    dig = 0;
    do{
        num=num/10;
        ++dig;
    }while(num>0);
    printf("その数は%d桁です。\n",dig);
    return(0);
    
}