#include <stdio.h>
 int main(void){
     char a[4] = "NET";
     char b[4];
     int i=0;
     while (i < 4)
     {
         b[i] = a[4-i-2];
         i++;
     }
     printf("%sは逆から読むと%sです。\n",a,b);
     return(0);
     
 }