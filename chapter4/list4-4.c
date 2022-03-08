#include <stdio.h>
int main(void){

    int a,b;
    int sum = 0;
    printf("整数A:");
    scanf("%d",&a);
    printf("整数B:");
    scanf("%d",&b);
    printf("%dから%dまでを足した値は",a,b);
    do
    {
        sum = sum + a;
        a= a + 1;
  
    }while (a<=b);
    printf("%dです。\n",sum);
    return(0);  
}
