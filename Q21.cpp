#include <bits/stdc++.h>
using namespace std;
void delete_element_by_value(vector<int>&arr,int value){
    cout<<"Enter Value to delete :";
    cin>>value;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        if(arr[i] == value){
            for(int j = i;j<n-1;j++){
                arr[j] = arr[j+1];
            }
            arr.pop_back();
            return;
        }
    }
    

}

int main() {
    int n,value;
    cout<<"Enter Size :";
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    delete_element_by_value(arr,value);
    for(int num : arr){
        cout<<num<<" ";
    }

    

    return 0;
}