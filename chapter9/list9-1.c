#include <stdio.h>
# include <stdlib.h>
int main(int argc, char *argv[]){
    int a,b,c,sum;
    if(argc != 4){
        printf("引数の個数が違います\n");
        exit(1);}
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    sum = a+b+c;
    printf("合計 = %d\n",sum);
    return(0);
}