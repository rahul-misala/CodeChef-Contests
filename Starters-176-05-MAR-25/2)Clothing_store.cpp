//Problem Link: https://www.codechef.com/problems/XLSL


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z,a,b,c;
        cin>>x>>y>>z>>a>>b>>c;
        int totalPeople = a+b+c;
        int ans = 0;
        int s = min(x,a);
        int l = min(y,b);
        int xl = min(z,c);
        ans += s;
        ans += l;
        ans += xl;
        x -= s;
        a -= s;
        y -= l;
        b -= l;
        z -= xl;
        c -= xl;
        
        int xltos = min(z,a);
        ans += xltos;
        z -=xltos;
        a -= xltos;
        int xltol = min(z,b);
        ans += xltol;
        z -= xltol;
        b -= xltol;
        int ltos = min(y,a);
        ans += ltos;
        y -= ltos;
        a -= ltos;
        cout<<ans<<endl;
        
    }
}
