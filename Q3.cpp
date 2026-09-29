
#include <bits/stdc++.h>
using namespace std;

int palindrome_check(int n){
    int last_digit ,reverse = 0,temp = n;
    while(temp!=0){
        last_digit = temp%10;
        reverse = reverse *10+ last_digit;
        temp /= 10;
    }
    if(reverse == n){
        return n;
    }
    else{
        return (reverse + n);
    }
}
int main(){
    int n ;
    cout<<"Enter Number :";
    cin>>n;
    int result = palindrome_check(n);
    cout<<result;

}