//Problem Link :https://www.codechef.com/problems/P3_175

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1;
        string s2;
        string s3;
        cin>>s1;
        cin>>s2;
        cin>>s3;
        int minUnset=INT_MAX;
        int minset=INT_MAX;
        vector<vector<int>> arr(3,vector<int>(2,0));
        for(int i=0;i<n;i++){
            if(s1[i]=='1'){
                arr[0][0]++;
            }else{
                arr[0][1]++;
            }
        }
        for(int i=0;i<n;i++){
            if(s2[i]=='1'){
                arr[1][0]++;
            }else{
                arr[1][1]++;
                
            }
        }
        for(int i=0;i<n;i++){
            if(s3[i]=='1'){
                arr[2][0]++;
            }else{
                arr[2][1]++;
            }
        }
        int setAlready=0;
        int mini = INT_MAX;
        int noOfzeros = 0;
        int noOfones = 0;
        for(int i=0;i<3;i++){
            if(arr[i][0]==0 ||arr[i][1]==0){
                setAlready++;
            }else{
                noOfones += arr[i][0];
                noOfzeros += arr[i][1];
                minUnset = min(minUnset,arr[i][1]);
                minset = min(minset,arr[i][0]);
                mini = min(mini,min(arr[i][0],arr[i][1]));
            }
        }
        
        if(setAlready==2){
            cout<<-1<<endl;
        }else if(setAlready==3){
            cout<<0<<endl;
        }else if(setAlready==1){
            if(noOfzeros==noOfones){
                cout<<mini<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }else{
            if(noOfones==n){
                cout<<minUnset<<endl;
            }else if(noOfzeros==n){
                cout<<minset<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}
