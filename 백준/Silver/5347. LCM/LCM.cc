#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return (a *b)/ gcd(a, b) ;
}

int main(void){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        cout << lcm(a, b) << endl;
    }
    return 0;
}
