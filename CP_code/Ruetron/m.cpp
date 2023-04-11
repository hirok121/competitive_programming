#include <stdio.h>
#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mii map<int, int>
#define pqi priority_queue<int, vector<int>>
#define pqig priority_queue<int, vector<int>, greater<int>>
#define pb push_back
#define vpii vector<pii>

using namespace std;

void solve()
{
    set<pair<char,int>> s,cards,cardss;

    cards={{'S',1},{'H',1},{'C',1},{'D',1},{'S',2},{'H',2},{'C',2},{'D',2},{'S',3},{'H',3},{'C',3},{'D',3},{'S',4},{'H',4},{'C',4},{'D',4},{'S',5},{'H',5},{'C',5},{'D',5},{'S',6},{'H',6},{'C',6},{'D',6},{'S',7},{'H',7},{'C',7},{'D',7},{'S',8},{'H',8},{'C',8},{'D',8},{'S',9},{'H',9},{'C',9},{'D',9},{'S',10},{'H',10},{'C',10},{'D',10},{'S',11},{'H',11},{'C',11},{'D',11},{'S',12},{'H',12},{'C',12},{'D',12},{'S',13},{'H',13},{'C',13},{'D',13}};
    cardss={{'A',1},{'B',1},{'C',1},{'D',1},{'A',2},{'B',2},{'C',2},{'D',2},{'A',3},{'B',3},{'C',3},{'D',3},{'A',4},{'B',4},{'C',4},{'D',4},{'A',5},{'B',5},{'C',5},{'D',5},{'A',6},{'B',6},{'C',6},{'D',6},{'A',7},{'B',7},{'C',7},{'D',7},{'A',8},{'B',8},{'C',8},{'D',8},{'A',9},{'B',9},{'C',9},{'D',9},{'A',10},{'B',10},{'C',10},{'D',10},{'A',11},{'B',11},{'C',11},{'D',11},{'A',12},{'B',12},{'C',12},{'D',12},{'A',13},{'B',13},{'C',13},{'D',13}};
    int x,n; cin>>n;
    char ch;

    for (int i = 0; i < n; i++)
    {
    cin>>ch>>x;
    switch (ch)
    {
    case 'S':
        ch='A';
        break;
    case 'H':
        ch='B';
        break;
    default:
        break;
    }

    cardss.erase({ch,x}); 
    }

    for(auto x : cardss){

        char ch=x.first;
    switch (ch)
    {
    case 'A':
        ch='S';
        break;
    case 'B':
        ch='H';
        break;
    default:
        break;
    }

        cout<<ch<<" "<<x.second<<endl;

    }

}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    // for (int i = 1; i < 14; i++)
    // {
    //     printf("{'A',%d},{'B',%d},{'C',%d},{'D',%d},",i,i,i,i);
    // }
    
        

    return 0;
}