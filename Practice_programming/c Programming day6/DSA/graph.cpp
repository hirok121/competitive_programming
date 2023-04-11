#include <bits/stdc++.h>

using namespace std;

class mygraph
{
private:
    /* data */
public:
    int v; // number of node
    vector<list<int>> adj;

    // constructor
    mygraph(int v);

    // member fuction
    void addedge(int, int);
    void BFS(int);
    void graphadjprint();
    void DFS(int);

    void adjprint(int s)
    {

        cout << " ----------adjecent------------" << endl;

        for (auto adjecent : adj[s])
        {
            cout << adjecent << "  ";
        }

        cout << "------------end---------------" << endl;
    }
};

mygraph::mygraph(int v)
{
    this->v = v + 1;
    adj.resize(v);
}

void mygraph ::addedge(int v, int u)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void mygraph ::graphadjprint()
{

    cout << " ----------allnode's adjecent------------" << endl;

    for (int i = 1; i <= v; i++)
    {

        cout << i << "-> ";

        for (auto y : adj[i])
        {

            cout << y << " ";
        }

        cout << endl;
    }

    cout << "------------end---------------" << endl;
}

void mygraph ::BFS(int s)
{

    queue<int> qu;
    vector<bool> visited(v, false);

    visited[s] = true;
    qu.push(s);

    while (!qu.empty())
    {
        s = qu.front();
        qu.pop();

        cout << s << " ";

        list<int>::iterator it;

        for (it = adj[s].begin(); it != adj[s].end(); it++)
        {
            if (!visited[*it])
            {
                visited[*it] = true;
                qu.push(*it);
            }
        }
    }
}

void mygraph ::DFS(int x)
{

    vector<int> visited(v, false);
}

int main()
{
    int v, u;
    cout << "enter the size of graph and edge" << endl;
    // cin >> v >> u;
    mygraph gg(4);

    gg.addedge(1, 2);
    gg.addedge(1, 3);
    gg.addedge(3, 4);

    // for (int i = 0; i < u; i++)
    // {
    //     cin >> v >> u;
    //     gg.addedge(v, u);
    // }

    // list<int> ll;
    // ll.push_back(1);
    // ll.push_back(2);
    // ll.push_back(3);
    // ll.push_back(4);
    // ll.push_back(5);
    // list<int> :: iterator it;
    // for( it=ll.begin() ; it!=ll.end() ; it++){
    //     cout << *it<<"  ";
    // }
    // for ( auto aa : ll){
    //     cout<< aa<< " ";
    // }

    // gg.adjprint(1);

    gg.graphadjprint();
    gg.BFS(1);

    return 0;
}