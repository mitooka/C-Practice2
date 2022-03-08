#include <stdio.h>
#include <stdlib.h>
int main(int argx, char *argv[]){
    float a,b,average;
;    if(argx!=3){
        printf("あんた違うよ\n");
        exit(1);
    }
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    average = (a+b)/2;
    printf("平均値は%fです\n",average);
}