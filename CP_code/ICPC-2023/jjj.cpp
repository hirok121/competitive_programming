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



void solve(int i){

     int n,max=INT_MIN;
     unsigned long long int ans=0,sum=0,k; 
    cin>>n>>k;
    vi a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];

        if(a[i]>max) max=a[i];
    }


    ans=sum + (k-1)*max;

     cout<<"Case "<<i<<": "<<ans<<endl;


}


int main()
{   
    int t=1,i=1;
    cin>>t;
    while(i<=t){
       
        solve(i);
        i++;
    }

  

return 0;
}