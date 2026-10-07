#include <bits/stdc++.h>
using namespace std;
int isprime(int n){
    if( n == 1 || n == 0){
        return 0;
    }
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int next_prime(int n){
    int prime = n+1;
    while(!isprime(prime)){
        prime++;
    }
    return prime;
}
int main() {
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int result  = next_prime(n);
    cout<<result;

    return 0;
}