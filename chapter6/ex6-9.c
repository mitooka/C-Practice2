#include <stdio.h>
 #define NUMBER 5
 void cpy_array(int v1[],int v2[],int no){
     int i;
     for(i=0;i<no;i++){
         v2[i] = v1[no-i-1];
         v2[no-i-1] = v1[i];
     }
 }
 
 int main(void){
     int i,vx[NUMBER],vy[NUMBER];
     printf("%d個の要素を入力してください:\n",NUMBER);
     for(i=0;i<NUMBER;i++){
         scanf("%d",&vx[i]);
     }
     cpy_array(vx,vy,NUMBER);
     printf("並び変えました！:\n");
     for(i=0;i<NUMBER;i++){
         printf("%d\n",vy[i]);
     }
     
     return(0);
 }