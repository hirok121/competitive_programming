#include <bits/stdc++.h>

using namespace std;


int solve()
{
    int n,i; cin>>n;
    vector<vector<int>> vec(n,vector<int>(n-1));
   vector<int> ans;

   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < n-1; j++)
    {
        cin>>vec[i][j];
        
    }
        if (i>2 && vec[i][0]!=vec[i-1][0])
        {       i--;
               break; 
        }
    
   }

   for (int k =0; k <n; k++)
   {
        if(vce[i-2][i]==)
   }
   


   
}

int main()
{

    int t;
    cin >> t;

    while (t--)
        solve();
}
