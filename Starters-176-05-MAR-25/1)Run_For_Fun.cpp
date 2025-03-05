//Problem Link : https://www.codechef.com/problems/RURT
// Global Rank : 2138

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y;
    cin>>x>>y;
    if(x>=y){
        cout<<0<<endl;
    }else{
        int count = 0;
        for(int i=x;i<y;i+=x){
            count++;
        }
        cout<<count<<endl;
    }
}
