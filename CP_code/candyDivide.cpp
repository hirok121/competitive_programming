#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool flag=false;


void  solve(int sum,int index,int ans, vector<int> candy,vector<int>& dp){

    if(ans==sum){

        if (!flag)
        {
            cout<<"YES"<<endl;
            flag=true;
        }
        
        return ;
    }

    if(flag) return;

    if (ans>sum || index>=candy.size()  )
    {
       // cout<<"NO";
        return;
    }
    

    solve(sum,index+1,ans+candy[index],candy,dp);
    solve(sum,index+1,ans,candy,dp);

    return ;
}

int main(){

int t;
cin>>t;

for (int i = 0; i < t; i++)
{
    int a;

cin>>a;

vector<int> candy(a);

for (int  i = 0; i < a; i++)
{
    cin>>candy[i];
}


    sort(candy.begin(),candy.end() ,greater<int>());

    int sum=0;

    for (int i = 0; i < a; i++)
    {
        sum+=candy[i];
    }

    if (sum%2)
    {
        cout<<"NO"<<endl;
        continue;
    }

    sum=sum/2;

    vector<int> dp;



    solve(sum,0,0,candy,dp);
   // cout<<sum<<"  ";

    if(!flag) cout<<"NO"<<endl;;

    flag=false;
    
}

    

    return 0;

}