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

    int n; cin>>n;
    unsigned long long int sum=0;

    vi a(n),b(n),c(n,0);
    
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
            // cout<<"sum"<<sum<<endl;
            // return;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    
    // bool flag =true;

    int step=0,indx=0,ii;

    while (sum)
    {
        for(indx=0 ;indx< n ;indx++){

            if(indx-step<0)
                ii=n+indx - step;
            else
                ii=indx-step;
        
        cout<<"Index "<<ii<<endl;

        c[indx]+=min(a[ii],b[indx]);
        a[ii]-=min(a[ii],b[indx]);
        sum-=min(a[ii],b[indx]);
        }

        step++;
        cout<<"sum"<<sum<<endl;
        cout<<"step"<<step<<endl;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i])
        //     {
        //         flag=true;
        //         break;
        //     }else{
        //         flag=false;
        //     }
            
        // }

    }
    
    
    for (int i = 0; i < n; i++)
    {
        cout<<c[i]<<" ";
    }
    
   
    cout<<endl;

    
}

int main()
{   
    int t=1;
    // cin>>tt;
    while(t--)
    solve();



  

return 0;
}