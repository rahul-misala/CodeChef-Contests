//Question Link : https://www.codechef.com/problems/DELDIF

#include <bits/stdc++.h>
using namespace std;

//intitution : 
//1) we take a map and store the frequency of each element in the given array.
//2) If a number repeats for 2 times we can make a zero so we count the number of zeroes that can be formed.
//3) l is the final length of the array after deleting the elements.
//4) if we get a non repeating number or a number which does not pair with its frequency then we can't form a zero so we increment l.(Ex: 3 3 3 we can only from 1 zero)
//5) No matter how many zeroes we get finally it will reduce into a single zero so we increment l by 1 if zeroes != 0 . (0 0 0 0 0 5 1) ---> (0 5 1)
//6) if there are no zeroes i.e if zeroes==0 then we will not increment l.

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
        int zeroes = 0;
        int l = 0;
        for(auto i : mp){
            int fir = i.first;
            int sec = i.second;
            if(fir!=0){
                if(sec>1){
                    zeroes += (sec/2);
                    if(sec%2!=0){
                        l++;
                    }
                }else{
                    l++;
                }
            }else{
                zeroes += sec;
            }
        }
        if(zeroes!=0){
            l++;
        }
        cout<<l<<endl;
    }
}
