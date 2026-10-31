#include <bits/stdc++.h>
using namespace std;

int findBestProductID(vector <int>&product_ID){
    unordered_map <int,int> freq;
    for(int ID : product_ID ){
        freq[ID]++;
    } 
    int bestID = product_ID[0];
    int maxFreq = 0;
    for(auto [ID,count] : freq){
        if(count > maxFreq){
            maxFreq = count;
            bestID = ID ;
        }
        else if(count == maxFreq){
            if(ID < bestID){
                bestID = ID;
            }
        }
    }
    return bestID;
}

int main() {
    int n;
    cout<<"Enter Size :";
    cin>>n;
    vector <int> sales(n);
    for(int i = 0;i<n;i++){
        cin>>sales[i];
    }
    cout<<"Most Frequent product ID :"<<findBestProductID(sales);


    

    return 0;
}