#include<iostream>
#include<vector>

using namespace std;

vector<vector<bool>>dp(100,vector<bool>(100,1)); 


bool solve(int arr[][2],int  ans[],int d,int sum,int x){

    // if( !dp[x][sum] ) return false;

    if (x>d && sum==0)
    {
        return true;
    }

    if (x>d || sum<0)
    {
        return false;
    }
    
    int m=arr[x][0];
    int n=arr[x][1];

    for (int  i =m ; i <= n; i++)
    {

        ans[x]=i;

        if(solve(arr,ans,d,sum-i,x+1)){

            return true;
        }

    //    dp[x][sum]=false;

    }
    
    return false;

}

int main(){

    int d,sumtime;

    cin>>d>>sumtime;

    int arr[d+1][2];


    for(int i=1 ;i<=d ;i++){
        int a,b;

        cin>>a>>b;

        arr[i][0]=a;
        arr[i][1]=b;
    }

    int ans[d+1];

    if(solve(arr,ans,d,sumtime,1)){

        cout<<"YES"<<endl;

        for (int  i = 1; i <= d; i++)
        {
           cout<<ans[i]<<" ";
        } 

    }else
            cout<<"NO";

            return 0;


}