#include <bits/stdc++.h>
using namespace std;

void reverse_subSegment(vector <int>&arr ,int start , int end ){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n,start,end;
    cout<<"Enter size :";
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter start :";
    cin>>start;
    cout<<"Enter end :";
    cin>>end;
    reverse_subSegment(arr,start,end);
    for(int num : arr){
        cout<<num <<" ";
    }
    cout<<endl;

    return 0;
}