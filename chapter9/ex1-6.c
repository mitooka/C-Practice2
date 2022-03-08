#include <stdio.h>
#include <stdlib.h>
typedef enum koyomi{
    January=1,February,March,Aplil,May,June,July,August,September,October,November,December
} Calender;
enum four_seasins{
    Spring, Summer, Autumn,Winter
}season;
int main(void){
    int keyin;
    Calender month;
    do{
    printf("\n月を1から12までの数字に入れてください--->");scanf("%d",&keyin);
    month = (Calender)keyin;
    if((month<January)||(month>December)){
        printf("\nそんな月はありません。\n");
    }while(!((month >=January)&&(month<=December)));
    
    }
}