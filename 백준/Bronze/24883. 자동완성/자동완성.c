//주어진 알파벳이 N 또는 n 이면 "Naver D2", 아니라면 "Naver Whale"을 따옴표를 제외하고 출력한다.
#include<stdio.h>
int main(void){
    char c;
    scanf("%c",&c);
    if(c== 'n' || c== 'N'){
        printf("Naver D2");
    }
    else{
        printf("Naver Whale");
    }
    return 0;
}