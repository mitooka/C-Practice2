#include <stdio.h>
#include <stdlib.h>
#define SQR(x) ((x)*(x))
int main(int argx, char *argv[]){
    if(argx!=2){
        printf("引数の個数違うよ");
    exit(1);}
    float a = atoi(argv[1]);
    printf("面積%f\n",SQR(atoi(argv[1]))*3.14);
    return(0);
}