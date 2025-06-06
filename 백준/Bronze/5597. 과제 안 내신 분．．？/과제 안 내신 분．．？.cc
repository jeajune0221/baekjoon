#include<stdio.h> 
int main(){
    int arr[31];
    int check[31]={0};
    for(int i = 0; i < 28; i++)
        scanf("%d",&arr[i]);
    for (int i = 0; i < 28; i++ ){
        for (int j =1 ; j < 31; j++){
            if (arr[i] == j)
                check[j] = 1;
                    }
        
    }
            for(int i =1; i < 31; i++){
                if (check[i] == 0)
                    printf("%d\n",i);
            }
            
        
        
        
    }
