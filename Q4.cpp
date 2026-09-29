#include <bits/stdc++.h>
using namespace std;

int subtract_product_sum_digits(int n){
    int product = 1;
    int sum = 0,last_digit;
    while(n!=0){
        last_digit = n%10;
        sum += last_digit;
        product *= last_digit;
        n/=10;
    }
    return (product - sum);
}

int main(){
    int n ;
    cout<<"Enter Number :";
    cin>>n;
    int result = subtract_product_sum_digits(n);
    cout<<result;
}