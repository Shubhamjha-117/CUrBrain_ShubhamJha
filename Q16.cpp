#include <bits/stdc++.h>
using namespace std;

int second_high(vector<int>&scores){
    int highest = -1;
    int second_highest = -1;
    for(auto score : scores){
        if(score > highest){
            second_highest = highest;
            highest = score;
        
        }
        else if(score > second_highest && highest != score){
            second_highest = score;
        }
    }
    return second_highest;


}

int main() {
    int n;
    printf("Enter Size:");
    scanf("%d",&n);
    vector<int>scores(n);
    for(int i = 0;i<scores.size();i++){
        scanf("%d",&scores[i]);
    }
    int ans = second_high(scores);
    printf("%d",ans);
    

    return 0;
}