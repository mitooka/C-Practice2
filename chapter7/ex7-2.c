#include <stdio.h>
 #include <string.h>
 int main(void){
     char fam[100],fim[100],i[100];
     printf("あなたの姓をローマ字で入力してください。");
     scanf("%s",fam);
     printf("あなたの名をローマ字で入力してください。:");
     scanf("%s",fim);
     strcat(fam," ");/* 苗字に空白 */
     strcat(fam,fim);/* 苗字空白と名前を合体 */
     printf("あなたの名前は%sです。\n",fam);  
     return(0);
 }
 