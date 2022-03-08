#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int saoikoro(void){
    srand((unsigned)time(NULL));
    printf("%d\n",(rand()%6)+1);
    return(0);
}
int main(void){
    saoikoro();
}



/* int main(void){
    int n;
    srand((unsigned)time(NULL));
    printf("%d\n",rand());
    return(0);
} */