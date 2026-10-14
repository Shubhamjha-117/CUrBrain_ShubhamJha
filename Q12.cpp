#include <bits/stdc++.h>
using namespace std;
long long Modular_power(long long base, int power,long long MOD){
    long long result = 1%MOD ;
    
    for(int i = 1 ; i<=power ; i++){
         result = (result*base)%MOD;
    }
    return result;
}

int main() {
    int base, power, MOD;
    cout<<"Enter Base :";
    cin>>base;
    cout<<"Enter Power :";
    cin>>power;
    cout<<"Enter MOD :";
    cin>>MOD;
    cout<<Modular_power(base,power,MOD);
    

    return 0;
}