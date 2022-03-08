#include <stdio.h>
int main(void){
    int a = 8,b=8;
    int c,d;
    printf("a=%d\tb=%d\n",a,b);

    printf("後置増分演算子(a++)を使い値をcにいれる\n");
    c = a++;
    printf("c=%d\ta++ =%d\n",c,a);
    printf("前置増分演算子(++b)を使い値をdに入れる\n");
    d=++b;
    printf("d=%d\t++b = %d\n",d,b);
}