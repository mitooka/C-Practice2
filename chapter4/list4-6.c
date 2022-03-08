#include <stdio.h>
int main(void){
    int i,no;
    printf("整数を入力してください。:"); scanf("%d",&no);
    i = 0;
    while(i<=no){
        printf("%d\n",i++);
        
    }
    printf("\n");
    
    return(0);
}