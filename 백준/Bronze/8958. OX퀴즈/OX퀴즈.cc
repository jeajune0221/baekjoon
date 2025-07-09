#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char str[81];
        int sum = 0;
        int cont = 0;
        cin >> str;
        for(int j = 0; str[j] != '\0'; j++){
            if (str[j] == 'O'){
                cont++;
                sum += cont;
            }
            else 
                cont = 0;
            
        }
        cout <<sum<<endl;
        
    }
    return 0;
}