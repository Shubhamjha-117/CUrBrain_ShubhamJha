#include <bits/stdc++.h>
using namespace std;

int closest_num(vector<int>&arr){
    int best_val = arr[0];
    for(int i = 1;i<arr.size();i++){
        if(abs(arr[i] < abs(best_val))){
            best_val = arr[i];
        }
    }
    return best_val;
}
int main() {
    int n;
    printf("Enter Size:");
    scanf("%d",&n);

    vector<int>arr(n);
    for(int i = 0;i<arr.size();i++){
        scanf("%d",&arr[i]);
    }
    int ans = closest_num(arr);
    printf("%d",ans);

    

    return 0;
}