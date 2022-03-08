#include <stdio.h>
int main(void){
    int i,no;
    printf("整数を入力してください。:"); scanf("%d",&no);
    for(i=0; i<=no; i++){
        printf("%d",i);
    }
    printf("\n");
    return(0);
}