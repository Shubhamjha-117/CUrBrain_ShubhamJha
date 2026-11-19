#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>&nums,int start,int end){
    while(start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n,k;
    cout<<"Enter size:";
    cin>>n;
   
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter k:";
    cin>>k;

    k = k%n;

    // 1 2 3 4 5 6 7
    // 4 3 2 1 7 6 5
    // 5 6 7 1 2 3 4

    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
    for(int num:nums){
        cout<<num<<" ";
    }

    

    return 0;
}