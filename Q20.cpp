#include <bits/stdc++.h>
using namespace std;

void rightsum(vector<int>&nums){
    int suffix_Sum = 0;
    for(int i = nums.size()-1;i>= 0;i--){
        int current = nums[i];
        nums[i] = suffix_Sum;
        suffix_Sum += current;
    }
}

// 10 4 8 3
//  15 11 3 0 
int main() {
    int n;
    cout<<"Enter Size :";
    cin>>n;
    vector<int>nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    rightsum(nums);
    for(int num:nums){
        cout<<num<<" ";
    }

    

    return 0;
}