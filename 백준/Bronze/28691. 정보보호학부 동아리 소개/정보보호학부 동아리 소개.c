#include<stdio.h>
int main(void){
    char c;
    scanf("%c",&c);
    if(c == 'M'){
        printf("%s","MatKor");
    }
    else if(c == 'W'){
        printf("%s","WiCys");
    }
    else if(c == 'C'){
        printf("%s","CyKor");
    }
    else if(c == 'A'){
        printf("%s","AlKor");
    }
    else{
        printf("%s","$clear");
    }
    return 0;
}
/*예제 입력 1 
M
예제 출력 1 
MatKor
예제 입력 2 
W
예제 출력 2 
WiCys
예제 입력 3 
C
예제 출력 3 
CyKor
예제 입력 4 
A
예제 출력 4 
AlKor
예제 입력 5 
$
예제 출력 5 
$clear
*/
