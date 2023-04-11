#include <bits/stdc++.h>

using namespace std;

class mygraph
{
private:
    /* data */
    void DFSDisconnectedUtill(int ,unordered_map<int,bool>& );

public:
    unordered_map<int, list<int>> adjecent;
   

    // constructor

    // member fuction
    void addedge(int, int);
    void BFS(int);
    void graphadjprint();
    void DFSconnected(int);
    void DFSDisconnected();
    


};

void mygraph ::addedge(int v, int u)
{
    adjecent[v].push_back(u);
}

void mygraph ::graphadjprint()
{

    cout << " ----------allnode's adjecent------------" << endl;

    for (auto i : adjecent)
    {

        cout << i.first << "-> ";

        for (auto y : i.second)
        {

            cout << y << " ";
        }

        cout << endl;
    }

    cout << "------------end---------------" << endl;
}

void mygraph ::BFS(int s)
{

     unordered_map<int, bool> visited;
    queue<int> qu;

    visited[s] = true;
    qu.push(s);

    while (!qu.empty())
    {
        s = qu.front();
        qu.pop();

        cout << s << " ";

        list<int>::iterator it;

        for (it = adjecent[s].begin(); it != adjecent[s].end(); it++)
        {
            if (!visited[*it])
            {
                visited[*it] = true;
                qu.push(*it);
            }
        }
    }
}
 
 
void mygraph ::DFSconnected(int x)
{

 static unordered_map<int, bool> visited;
    visited[x] = true;

    cout << x << "  ";

    list<int>::iterator i;

    for (i = adjecent[x].begin(); i != adjecent[x].end(); i++)
    {

        if (!visited[*i])
        {
            DFSconnected(*i);
        }
    }
}

void mygraph :: DFSDisconnectedUtill(int x ,unordered_map<int, bool> & visited){


    cout << x <<"  ";
    visited[x]=true;

    for(auto i : adjecent[x]){

        if(!visited[i])
        DFSDisconnectedUtill(i,visited);
    }


}

void mygraph ::DFSDisconnected()
{

 unordered_map<int, bool> visited;

 for(auto x : adjecent){

    if(!visited[x.first])
    DFSDisconnectedUtill(x.first, visited);

 }

}

int main()
{
    int v, u;
    cout << "enter the size of graph and edge" << endl;
    // cin >> v >> u;
    mygraph gg;

    gg.addedge(0, 2);
    gg.addedge(0, 3);
    gg.addedge(0, 1);
    gg.addedge(2, 4);

    // for (int i = 0; i < u; i++)
    // {
    //     cin >> v >> u;
    //     gg.addedge(v, u);
    // }


    return 0;
}