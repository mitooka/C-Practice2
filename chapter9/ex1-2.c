#include <stdio.h>
#include <stdlib.h>
int main(int argx, char *argv[]){
    if(argx!=2){
        printf("引数の個数が違いますヨ\n");
    exit(1);}
    float a = atoi(argv[1]);
    printf("面積%f\n",a*a*3.14);
    return(0);
}