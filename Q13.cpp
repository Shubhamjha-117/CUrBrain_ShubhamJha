#include <bits/stdc++.h>
using namespace std;

bool divisible_prefix_subarray(vector<int>& arr , int k){
    int curr_sum = 0;
    for(int num:arr){
        curr_sum += num;
        if(curr_sum % k == 0){
            return true;
        }
        
    }
    return false;
}
int main() {
    int n,k;
    cout<<"Enter Size :";
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<boolalpha<<divisible_prefix_subarray(arr,k);
    

    return 0;
}