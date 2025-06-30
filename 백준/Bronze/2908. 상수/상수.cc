#include <stdio.h>

int main() {
    char s1[10],s2[10];
    scanf("%s %s",s1,s2);
    for (int i = 0; i < 2; i++){
        int temp = s1[2-i];
        s1[2-i] = s1[i];
        s1[i] = temp;
        temp = s2[2-i];
        s2[2-i] = s2[i];
        s2[i] = temp;
    }
    for (int i = 0; i < 3; i++){
        if (s1[i] == s2[i])
            continue;
        else if (s1[i] > s2[i]){
            printf("%s",s1);
            break;
        }
        else{
            printf("%s",s2);
            break;
        }
                
        }
        
    return 0;
    }
