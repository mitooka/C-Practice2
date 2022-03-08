#include <stdio.h>
 #define NUMBER 5
 int min_of(int vc[],int no){
     int i;
     int min=vc[0];
     for(i=1;i<no;i++){
         if(vc[i]<min){
             min = vc[i];
         }
         
         } 
     return(min);
 }
 
 int main(void){
     int eigo[NUMBER];
     int min_eigo,i;
     printf("%d人の数字を入力\n",NUMBER);
     for(i=0; i<NUMBER;i++){
         scanf("%d",&eigo[i]);
     }
     min_eigo = min_of(eigo,NUMBER);
     printf("最低点:%d点",min_eigo);
     return(0);
 }