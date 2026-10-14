#include <bits/stdc++.h>
using namespace std;

long long calculate_modular(vector <long long>&arr){
    long long sum  = 0;
    long long MOD = (1000000007);
    for(long long num : arr){
        sum = (sum + num)%MOD;
    }
    return sum;
}

int main() {
    int n;
    cout<<"Enter Size:";
    cin>>n;
    vector<long long > arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<calculate_modular(arr);

    

    return 0;
}