#include<bits/stdc++.h>

using namespace std;

 void solve(){

    int a,b,n ; cin>>a>>b>>n;
    int ans=0;

    while (a<=n && b<=n )
    {
        a>b ? b+=a  : a+=b;
        ans++;
    }
    
   
    cout<<ans<<endl;

 }

int main(){
    int t; cin>>t;

    for (int i = 0; i < t; i++)
    {
         solve();
    }
    
   

    return 0;

}