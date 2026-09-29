#include <bits/stdc++.h>
using namespace std;

bool count_digits(int n)
{
    if( n == 0){
        return false ;
    }
    int count = 0;
    while(n != 0){
        n/=10;
        count++;
    }
    return (count % 2 == 0);
}
int main()
{
    int n;
    cout << "Enter Number :";
    cin >> n;
    bool result = count_digits(n);
    cout << boolalpha<< result;
}