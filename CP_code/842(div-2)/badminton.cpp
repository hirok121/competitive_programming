#include<bits/stdc++.h>

using namespace std;

bool xorr(bool a,bool b){

    return (!a) && b || a && (!b);
}


void solve(){

int n,x,y;

cin>>n>>x>>y;
int temp=max(x,y);

bool flag=xorr(x,y);

if ( !flag || ((n-1)%temp))
{
       cout<<-1<<endl;   
      return;
}



    for (int i = 2; i <= n; i+=temp)
    {
        for(int j=0;j<temp;j++){
            cout <<i<<" ";
        }
       
    }
     cout<<endl;
    
}

int main (){
int t=1;
 cin>>t;
    while (t--)
    {
        solve();
    }
    

    
}