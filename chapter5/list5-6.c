#include <stdio.h>
int main(void){
    int i;
    int va[5]={15,20,30};
    int vb[5];
    printf("va vb");
    printf("------");
    for(i=0;i<=4;i++){
        printf("%3d%3d\n",va[i],vb[i]);
    }
    return(0);
}