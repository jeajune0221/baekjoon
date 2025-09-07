#include<stdio.h>
#include<string.h>
int main(void){
    char s1[5];
    char s2[5];
    int n1=0,n2=0;
    scanf("%s",s1);
    scanf("%s",s2);
    int l1 = strlen(s1),l2 = strlen(s2);
    for(int i = 0; i < l1/2; i++){
        char temp = s1[i];
        s1[i] = s1[l1 - i -1];
        s1[l1 - i -1] = temp;
    }
    for(int i = 0; i < l2/2; i++){
        char temp = s2[i];
        s2[i] = s2[l2 - i - 1];
        s2[l2 - i -1] = temp;
    }
    for(int i = 0; i< l1; i++){
        n1 = n1 * 10 + (s1[i] - 48);
    }
    for(int i = 0; i< l2; i++){
        n2 = n2 * 10 + (s2[i] - 48);
    }
    int cont = 0;
    char result[10];
    int sum = n1 + n2;
    if(sum == 0){
        result[cont++] = '0';
    } 
    else {
        while(sum > 0){
            result[cont++] = (sum % 10) + '0';
            sum /= 10;
        }
    }
    result[cont] = '\0';
    int idx = 0;
    while(result[idx]=='0' && result[idx+1]!='\0'){ 
        idx++; 
    }


    result[cont] = '\0';
    printf("%s\n", result + idx);
    return 0;
}
