#include <bits/stdc++.h>
using namespace std;
void merge_sorted_array(vector<int>&nums1, int m ,vector<int>&nums2,int n){
    int i = m-1;
    int j = n-1;
    int k = m + n -1;
    while(i>= 0 && j>=0){
        if(nums1[i] >= nums2[j]){
            nums1[k] = nums1[i];
            i--;
        }
        else{
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while(j>=0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}
int main() {
    int m,n;
    cout<<"Enter Size of First array :";
    cin>>m;
    
    vector<int>nums1(m,0);
    for(int i = 0;i<m;i++){
        cin>>nums1[i];
    }
    cout<<"Enter Size of Second Array :";
    cin>>n;
    nums1.resize(m+n,0);
    vector<int>nums2(n,0);
    for(int j =0;j<n;j++){
        cin>>nums2[j];
    }
    merge_sorted_array(nums1,m,nums2,n);
    for(int num:nums1){
        cout<<num<<" ";
    }
    

    return 0;
}