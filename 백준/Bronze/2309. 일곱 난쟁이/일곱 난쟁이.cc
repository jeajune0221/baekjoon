#include <iostream>
using namespace std;

int main() {
    int arr[9];
    int sum = 0;
    int cont = 0;
    for(int i = 0; i < 9; i++){
        cin >>arr[i];
        sum+=arr[i];
    }
    for(int i = 0; i < 9; i++){
        for (int j = i+1; j < 9; j++){
            if(sum - arr[i] - arr[j] == 100){
                arr[i] = 0;
                arr[j] = 0;
                cont = 1;
                break;
            }  
        }
        if(cont == 1)
            break;
    }
    
    for(int i = 0; i<9; i++){
        for(int j = i+1; j< 9; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < 9; i++){
        if(arr[i] == 0)
            continue;
        cout<<arr[i]<<endl;
    }
    return 0;
}