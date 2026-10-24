#include <bits/stdc++.h>
using namespace std;

vector <int> filter_sales(vector<int>&sales, int threshold){
    vector<int> result ;
    for(auto value : sales){
        if(value >= threshold ){
            result.push_back(value);
        }
    }
    return result;
}
int main() {
    int n;
    printf("Enter Size :");
    scanf("%d",&n);
    vector<int>sales(n);
    for(int i = 0;i<n;i++){
        scanf("%d",&sales[i]);
    }
    int threshold;
    printf("Enter Threshold :");
    scanf("%d",&threshold);
    vector<int>result = filter_sales(sales,threshold);
    for(int i = 0;i<result.size();i++){
        printf("%d ",result[i]);
    }


    

    return 0;
}