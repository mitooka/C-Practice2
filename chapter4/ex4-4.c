#include <stdio.h>
int main(void){
    int no=1,sum=0;
    for(no=1;no<=5;no++){
        sum +=no;
    }
    printf("1から5までの足した値は%dです。\n",sum);
    return(0);
}