#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{


     int t;
     cin>>t;
     for(int i=1;i<=t;i++)
     {
       int k;
       vector<int>v;
       for(int j=0;j<3;j++)
       {
          int a;
          cin>>a;
          v.push_back(a);
       }
       cin>>k;
       //sort(v.begin(),v.end());
       int sum=v[0]+v[1]+v[2];
       int avg=sum/3;
       if(sum%3!=0)
       {
        cout<<"Case "<<i<<": "<<"Fight"<<endl;
        continue; 
       }
       int remain1;
       int remain2;
       int remain3;
       (v[0]>avg)?remain1=v[0]-avg:remain1=avg-v[0];
       (v[1]>avg)?remain2=v[1]-avg:remain2=avg-v[1];
       (v[2]>avg)?remain3=v[2]-avg:remain3=avg-v[2];
       //cout<<remain1<<endl;
      // cout<<remain2<<endl;
       //cout<<remain3<<endl;
        if(remain1==0)remain1=k;
        if(remain2==0)remain2=k;
        if(remain3==0)remain3=k;

       if(remain1%k==0&&remain2%k==0&&remain3%k==0)
       cout<<"Case "<<i<<": "<<"Peaceful"<<endl;
       else
       cout<<"Case "<<i<<": "<<"Fight"<<endl;

     }


 return 0;    
}