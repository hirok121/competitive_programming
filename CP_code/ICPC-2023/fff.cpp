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

struct st
{
    string ts;
    string email;
    string year;
    string blood;
};


void solve(){

    map<string,int> blood;
    blood["A+"]=0;
    blood["A-"]=0;
    blood["AB+"]=0;
    blood["AB-"]=0;
    blood["B+"]=0;
    blood["B-"]=0;
    blood["O+"]=0;
    blood["O-"]=0;
    map<int,int> year;
    map<string,st>data;
    int N;
    cin>>N;

    for (int i = 0; i < N; i++)
    {  
        bool flag=true;
         st a;
        cin>>a.ts;
        cin>>a.email;
        cin>>a.year;
        cin>>a.blood;

        for(auto ix : data){
            string aa=a.ts;
            string bb=ix.second.ts;
            if(ix.first==a.email ){
                // cout<<"Duplicate found\n";
                if(strcmp(aa.c_str(),bb.c_str() )<0){
                    // cout<<"Duplicate Not written\n";
                    flag=false;
                    break;
                }
                // cout<<"Duplicate  written\n";
            }
        }
        
    if(flag)
        data[a.email]=a;
    }

    for(auto it : data){
        blood[it.second.blood]++;
        string temp=it.second.year.substr(6);
        year[stoi(temp)]++;
    }
    
    for(auto i : blood){
        cout<<i.first<<" "<<i.second<<endl;
    }

    for(auto i : year){
        cout<<i.first<<" "<<i.second<<endl;
    }

}


int main()
{   
    int t=1;
    // cin>>tt;
    while(t--)
    solve();



  

return 0;
}