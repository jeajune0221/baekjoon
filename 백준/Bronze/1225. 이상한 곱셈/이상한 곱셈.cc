#include<stdio.h>
int main(){
    char str2[10001],str1[10001];
    long long  sum = 0;
    
    scanf("%s %s",str1,str2);
    for (int i = 0; str1[i]!='\0'; i++){
        for (int j = 0; str2[j]!='\0'; j++){
            sum += (str1[i]-48) * (str2[j]-48);
        }
        
    }
    
    printf("%lld",sum);
}