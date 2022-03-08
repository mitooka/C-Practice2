#include <stdio.h>
int main(void){
    int na,nb;
    int sum,start,end;
    printf("2つの整数を入力してください");
    printf("整数A="); scanf("%d",&na);
    printf("整数B="); scanf("%d",&nb);
    if(na>=nb){
        start = nb;
        end = na;
    }
    else{
        start = na;
        end = nb;
    }
    printf("%d以上%d以下の累算値は",start,end);
    sum=0;
    do{
        sum+=start;
        start +=1;
    }while(start<=end);
    printf("%dです。\n",sum);
    return(0);
    }