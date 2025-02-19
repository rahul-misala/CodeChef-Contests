//question Link : https://www.codechef.com/problems/HWFIN 
// Global Rank : 1565.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y;
    cin>>x>>y;
    
    int totalQuestions = y*10;
    if((totalQuestions+x)>=100){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
