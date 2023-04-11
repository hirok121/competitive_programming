#include<stdio.h>
#include<bits/stdc++.h>

#define N 100007
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

   unsigned long long int p1,p2,n,m,ans1,ans2,ans3,ans;
    cin>>p1>>p2>>n>>m;

    if (n>m)
    {
        ans1=p1*m + p2*(n-m-1);
        ans2=p1*(n-1);
        ans3=p2*n;
        ans=min(ans1,min(ans2,ans3));
    }else{
        ans1=p1*n;
        ans2=p2*n;
        ans3=min(ans1,ans2);
    }
    

    cout<<min(ans,ans3)<<endl;

    return;
    
    if (p1<p2)
    {
        if (n>m)
        {
            cout<<(n-1)*p1<<endl;
        }else
            cout<<n*p1<<endl;
        
    }else if(((p1*m)-(p2*(m+1)))<=0){
        cout<<n*p2<<endl;
        cout<<"((p1*m)-(p2*(m+1)))<=0"<<endl;
        cout<<p1*m - p2*(m+1) <<endl;

    }else{
        if(n>m){
              cout<<(p1*m)+(n-m-1)*p2<<endl;
               cout<<"not ((p1*m)-(p2*(m+1)))<=0 and (n>m)"<<endl;
                cout<<p1<<"  "<<p2<<"  "<<n<<"  "<<m<<endl;
               cout<<p1*m - p2*(m+1) <<endl;
        }
        else{
            cout<<"not ((p1*m)-(p2*(m+1)))<=0 and not (n>m)"<<endl;
             cout<<n*p2<<endl;
        }
    }
    cout<<p1<<"  "<<p2<<"  "<<n<<"  "<<m;
      
}


int main()
{   
    int t=1;
    cin>>t;
    while(t--)
    solve();

    // cout<<;

  

return 0;
}