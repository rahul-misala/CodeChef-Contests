//quesion Link : https://www.codechef.com/problems/BIGNAME

#include <bits/stdc++.h>
using namespace std;


//intitution :
//1) if we take any string the maximum lexicographically string we can form is by replacing all the characters with 'z'.(He asked to return any string which is lexicographically greater than the given string)
//2) so if the given string contains any character other than 'z' then we can form the maximum lexicographically string by replacing all the characters with 'z'.
//3) if the given string contains all the characters as 'z' then we can't form any string which is lexicographically greater than the given string.so we retrun -1



int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string A;
        cin>>A;
        bool found = false;
        for(int i=0;i<n;i++){
            if(A[i]!='z'){
                found = true;
                break;
            }
        }
        if(found){
            for(int i=0;i<n;i++){
                cout<<"z";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }
}
