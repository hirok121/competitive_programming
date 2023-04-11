#include<bits/stdc++.h>

using namespace std;

 void solve(){

    int key,count=0; cin>>key;

    int arr[4];
    arr[0]=-1;

for (int  i = 1; i < 4; i++)
{
    cin>>arr[i];
}

    vector<bool> visited(4,0);
    visited[0]=1;

    while (key)
    {   
        visited[key]=1;
        key=arr[key];
    }
    
    for (int  i = 0; i < 4; i++)
    {
        if (!visited[i])
        {
           cout<<"NO"<<endl; return;
        }
        
    }
    
    
    cout<<"YES"<<endl;

 }

int main(){
    int t; cin>>t;

    for (int i = 0; i < t; i++)
    {
         solve();
    }
    
   

    return 0;

}