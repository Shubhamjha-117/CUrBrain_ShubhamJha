#include <bits/stdc++.h>
using namespace std;
int digit_freq_diff(int n,int a, int b){
    int last_digit,a_count = 0,b_count = 0 ;
    n = abs(n);
        if( n == 0){
            if(a == 0){
                a_count++;
            }
            if(b== 0){
                b_count ++;
            }
        }
    while(n!=0){
        
        last_digit = n%10;
        if(last_digit == a){
            a_count++;
        }
        if(last_digit == b){
            b_count++;
        }
        n/=10;
    }
    return abs(a_count - b_count);
}
int main(){
    int n,a,b;
    cout<<"Enter Number :";
    cin>>n;
    
    cout<<"Enter a :";
    cin>>a;

    cout<<"Enter b :";
    cin>>b;

    int result = digit_freq_diff(n,a,b);
    cout<<result;
}