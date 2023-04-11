#include<bits/stdc++.h>

using namespace std;


unordered_map<string,int> dp;

int solve(string &st){

if ( dp.find(st)!=dp.end() )
{
    return dp[st];
}

    string temp=st;
  int x,iz=0,i1=0;

    while (st[iz]=='0')
    {
        iz++;
    }

    st.erase(0,iz);

    if(st.size()<=1)
    return 0;

    while (st[i1]=='1')
    {
       i1++;
    }

    if(i1 ==st.size())
        return 0;


    while (i1 != st.size())
    {
        if(st[i1]=='0')
            st[i1++]='1';
            else
             st[i1++]='0';
    }
    
    dp[temp]=1 + solve(st);
    
   return dp[temp];

}

int main (){

   
int t;
cin>>t;
while (t--)
{
  int x;
  string st;

cin>>x>>st;

cout<<solve(st)<<endl;
    
}

  
}