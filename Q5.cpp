#include <bits/stdc++.h>
using namespace std;
    
vector<int> replace_digit(int n){
    vector <int> list;
    int last_digit = 0;
    while(n != 0){
        last_digit = n%10;
        if(last_digit % 2 ==0){
            last_digit = 0;
            list.push_back(last_digit);
        }
        else{
            list.push_back(last_digit);
        }
        
        n/=10;
    }
    reverse(list.begin(),list.end());
    return list;
}

int main(){
    int n ;
    cout<<"Enter Number :";
    cin>>n;
   
    vector <int> result = replace_digit(n);
    cout <<"[";
    for(int  i = 0;i<result.size();i++){
        cout<<result[i];
        if(i<result.size()-1){
            cout<<", ";
        }
    }
    cout<<"]";
}