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

vi a(3);
unsigned long long int k,sum,rem1,rem2,avg,rem3;

cin>>a[0]>>a[1]>>a[2];
cin>>k;
// k*=2;

sort(a.rbegin(),a.rend());

sum=a[0]+a[1]+a[2];

if(sum%3){
    cout<<"Case "<<i<<": Fight"<<endl;
    return;
}

if(a[0]==a[1] && a[1]==a[2] && a[0]==a[2]){
      cout<<"Case "<<i<<": Peaceful\n";
      return;
}

avg=sum/3;

 rem1=a[0]-avg;
 rem3=avg-a[2];

if(a[1]>avg) {
    rem2=a[1]-avg;
}
else if(a[1]<avg){
    rem2=avg-a[1];
}else
    rem2=k;


if(a[1]==avg && !(rem1%k) && !(rem2%k) && !(rem3%k) )
     cout<<"Case "<<i<<": Peaceful\n";
    else
     cout<<"Case "<<i<<": Fight\n";

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