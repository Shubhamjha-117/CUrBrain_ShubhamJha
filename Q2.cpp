#include <bits/stdc++.h>
using namespace std;

int reverse_double(int n){
    int last_digit ,reverse = 0;
    while(n!=0){
        last_digit = n%10;
        reverse = reverse *10+ last_digit;
        n /= 10;
    }
    return (reverse*2);
}
int main(){
    int n ;
    cout<<"Enter Number :";
    cin>>n;
    int result = reverse_double(n);
    cout<<result;

}