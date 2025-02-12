//Question link : https://www.codechef.com/problems/COOLSUB


//intitution :
// 1) if we take any subsequence of the given array the average of single element is the element itself. so every element in subsequence should be present in the complement subsequence as well.
// 2) because they asked to return any subsequence which is cool. so we can take the element which is repeating more than once in the given array as the subsequence.
// 3) if an array doesnot contain any element which is repeating more than once then we can return -1. beacuse we can't form any subsequence which is cool (from 1 point).

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int res=-1;
        for(auto i:mp){
            if(i.second > 1){
                res = i.first;
                break;
            }
        }
        if(res!=-1){
            cout<<1<<endl;
            cout<<res<<endl;
        }else{
            cout<<res<<endl;
        }
    }
}
