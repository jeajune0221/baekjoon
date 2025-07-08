#include <iostream>
int gcd(int a,int b){
    if (b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a, int b) {
    int g = a > b ? a : b; 
    while (g % a != 0 || g % b != 0) {
        g++;
    }
    return g;
}

int main() {
    int a,b;
    std::cin>>a>>b;
    std::cout<<gcd(a,b)<<std::endl;
    std::cout<<lcm(a,b);
    
    
    return 0;
}