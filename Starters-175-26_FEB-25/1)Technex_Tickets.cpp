//problem link : https://www.codechef.com/problems/P2_175
//Global Rank : 1620 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }else{
            
            if(n%2==0){
                cout<<(n/2)+1<<endl;
            }else{
                cout<<n/2<<endl;
            }
        }
    }
}
