#include <stdio.h>
int main(void){
    int i;
    int vx[5] = {7,5,2,8,11};
    for(i=0;i<=1;i++){
        int temp = vx[i];
        vx[i] =vx[4-i];
        vx[4-i] = temp;
    }
    for(i=0;i<=4;i++){
        printf("vx[%d]=%d\n",i,vx[i]);
    }
    return(0);
}