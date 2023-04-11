#include<stdio.h>
#include<bits/stdc++.h>

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define mii map<int,int>
#define pqi priority_queue<int,vector<int>>
#define pqig priority_queue<int,vector<int>,greater<int>>
#define pb push_back
#define vpii vector<pii>

using namespace std;

void solve(){
    int n,count=0,i=0;    cin>>n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        int t; cin>>t;
        a[i]=t;
        if(t==2) count++;

    }

     if(!count) {
        cout<<1<<endl;
        return ;
    }

    if(count%2) {
        cout<<-1<<endl;
        return ;
    }

    count/=2;
    
    while (count)
    {
        if(a[i++]==2) count--;
        
    }
    
    cout <<i<<endl;
}

int main()
{   
    int t=1;
    cin>>t;
    while(t--) solve();



return 0;
}