#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 問題2-1 */
typedef enum janken{
    Gu=1, Cho=2,Pa=5} JPON; /* JPON型指定 */

/* 問題2-2 */
int saikoro(void){           /* CPのじゃんけんをランダムで生成 */
    int number;
    srand((unsigned)time(NULL));
    number=(rand())%6+1;
    return(number);
}
/* 問題2-3*/
JPON sysjan(int saoikoro){/* ここの関数のintは何を宣言しているのか。JPONでも動く */
    int pon;
    switch (saoikoro)
    {
    case 1:
        pon=1;
        break;
    case 2:
        pon=1;
        break;
    case 3:
        pon=2;
        break;
    case 4:
        pon=2;
        break;
    case 5:
        pon=5;
        break;
    case 6:
        pon=5;
        break;
    }
    return((JPON)pon);
}
/* 問題2-4 */
void watashinoken(JPON ken){

    switch (ken)
    {
    case Gu:
        printf("コンピュータはグーを出しました。\n");
        break;
    case Cho:
        printf("コンピュータはチョキを出しました。\n");
        break;
    case Pa:
        printf("コンピュータはパーを出しました。\n");
        break;
    }
    
}

/* 問題2-5 */
void anatanoken(JPON ken){
    switch (ken)
    {
        case Gu:
            printf("あなたはグーを出しました。\n");
            break;
        case Cho:
            printf("あなたはチョキを出しました。\n");
            break;
        case Pa:
            printf("あなたはパーを出しました。\n");
            break;
    }
}

int shoubu(JPON kenin,JPON kenout){
    int shoubukekka;
    switch (kenin)
    {
    case Gu:{
        if(kenout==1){
            shoubukekka=0;}
    
        else if(kenout==2){
            shoubukekka=1;}
        else
        {shoubukekka=-1;};
        }break;
    case Cho:{
        if(kenout==2){
            shoubukekka=0;}
        else if(kenout==5){
            shoubukekka=1;}
        else
        {shoubukekka=-1;};
        }break;

    case Pa:{
     if(kenout==5){
            shoubukekka=0;
        }
        else if(kenout==1){
            shoubukekka=1;
        }
        else
        {shoubukekka=-1;};
        }
    default:
        printf("shoubuエラー");
    }
    return shoubukekka;
}

void kekka(JPON value){
    switch (value)
    {
    case -1:
        printf("あなたの負けです。");
        break;
    
    case +1:
        printf("あなたの勝ちです。");
        break;
    case 0:
        printf("あいこです。");
        break;
    default:
        printf("kekka関数エラー");
        break;
    }
}
    

int main(void){
    JPON choken,sysken;
    int ken_buf,sai,shoubukekka;
    do{
        printf("\nじゃんけんしましょう。\n");
        printf("グーは1 チョキは2 パーは5をいれます。\n");
        printf("\nじゃんけんぽん！はいどうぞ:\a");
        scanf("%d",&ken_buf);
        choken=(JPON)ken_buf;
        if ((choken != Gu)&&(choken != Cho)&&(choken != Pa))
        {printf("\a@@@正しく入れてください！@@@@\n");
        }
    }while(!(choken == Gu || choken ==Cho || choken == Pa));

    sysken=sysjan(saikoro()); /* サイコロを振り。CPのサイコロの目 */

    shoubukekka=shoubu(choken,sysken);

    printf("\a");
    anatanoken(choken);
    watashinoken(sysken);
    kekka(shoubukekka);
    printf("\n終わります。おつかれさん。\n\n");
    return(0);

}