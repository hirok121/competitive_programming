#include <bits/stdc++.h>
#include<stack>
#include<unordered_map>


using namespace std;

class mygraph
{
private:
    /* data */
    void DFSDisconnectedUtill(int, unordered_map<int, bool> &);
    bool iscyclicDFSUtill(int, int, unordered_map<int, bool> &);
    bool iscyclicDFSdirectedUtill(int, unordered_map<int, bool> &, unordered_map<int, bool> &);
    void topologicalsortUtill(int node, stack<int> &st, unordered_map<int, bool> &visited);

public:
    unordered_map<int, list<int>> adjecent;
    unordered_map<int, list<pair<int, int>>> adjecentweighted;
    vector< vector<int> > adjecentVec;

    // constructor

    // member fuction
    void addedge(int, int);
    void addedgeDirected(int, int);
    void addedgeweighted(int v, int u, int w);
    void BFS(int);
    void graphadjprint();
    void DFSconnected(int);
    void DFSDisconnected();
    bool iscyclicBFS();
    bool iscyclicDFS();
    bool iscyclicDFSdirected();
    void topologicalsort();
    void topologicalsortkahnsalgo();
    vector<int> sortestpathdijkstrasalgo(int src, int v);
    vector<int> sortestpathBellmanFordAlgo(int src, int v);
    void MSTPrimsalgo(int src, int v);



};

void mygraph ::addedge(int v, int u)
{
    adjecent[v].push_back(u);
    adjecent[u].push_back(v);
}

void mygraph ::addedgeDirected(int v, int u)
{

    adjecent[v].push_back(u);
}

void mygraph ::addedgeweighted(int v, int u, int w)
{

    adjecentweighted[v].push_back({u, w});
    adjecentweighted[u].push_back({v, w});
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

void mygraph ::DFSDisconnectedUtill(int x, unordered_map<int, bool> &visited)
{

    cout << x << "  ";
    visited[x] = true;

    for (auto i : adjecent[x])
    {

        if (!visited[i])
            DFSDisconnectedUtill(i, visited);
    }
}

void mygraph ::DFSDisconnected()
{

    unordered_map<int, bool> visited;

    for (auto x : adjecent)
    {

        if (!visited[x.first])
            DFSDisconnectedUtill(x.first, visited);
    }
}

bool mygraph ::iscyclicBFS()
{

    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;

    queue<int> quee;

    for (auto i : adjecent)
    {

        if (!visited[i.first])
        {
            int x = i.first;
            visited[x] = true;
            parent[x] = -1;
            quee.push(x);

            while (!quee.empty())
            {
                int front = quee.front();
                quee.pop();

                for (auto neighbor : adjecent[front])
                {

                    if (visited[neighbor] && neighbor != parent[front])
                    {
                        return true;
                    }
                    else if (!visited[neighbor])
                    {
                        quee.push(neighbor);
                        visited[neighbor] = true;
                        parent[neighbor] = front;
                    }
                }
            }
        }
    }
    return false;
}

bool mygraph ::iscyclicDFSUtill(int src, int parent, unordered_map<int, bool> &visited)
{

    visited[src] = true;

    for (auto neighbor : adjecent[src])
    {

        if (!visited[neighbor])
        {
            if (iscyclicDFSUtill(neighbor, src, visited))
                return true;
        }
        else if (neighbor != parent)
        {
            return true;
        }
    }
}

bool mygraph ::iscyclicDFS()
{

    unordered_map<int, bool> visited;

    for (auto i : adjecent)
    {

        if (!visited[i.first] && iscyclicDFSUtill(i.first, -1, visited))
        {
            return true;
        }
    }

    return false;
}

bool mygraph ::iscyclicDFSdirectedUtill(int src, unordered_map<int, bool> &visited, unordered_map<int, bool> &stackrecord)
{

    visited[src] = true;
    stackrecord[src] = true;

    for (auto neighbor : adjecent[src])
    {

        if (!visited[neighbor] && iscyclicDFSdirectedUtill(neighbor, visited, stackrecord))
        {
            return true;
        }
        else if (stackrecord[neighbor])
        {
            return true;
        }
    }
    stackrecord[src] = false;

    return false;
}

bool mygraph ::iscyclicDFSdirected()
{

    unordered_map<int, bool> visited;
    unordered_map<int, bool> stackrecord;

    for (auto i : adjecent)
    {

        if (!visited[i.first] && iscyclicDFSdirectedUtill(i.first, visited, stackrecord))
            return true;
    }

    return false;
}

void mygraph ::topologicalsortUtill(int node, stack<int> &st, unordered_map<int, bool> &visited)
{

    visited[node] = true;

    for (auto neighbor : adjecent[node])
    {

        if (!visited[neighbor])
        {
            topologicalsortUtill(neighbor, st, visited);
        }
    }
    st.push(node);
}

void mygraph ::topologicalsort()
{

    unordered_map<int, bool> visited;
    stack<int> st;

    for (auto i : adjecent)
    {
        if (!visited[i.first])
        {
            topologicalsortUtill(i.first, st, visited);
        }
    }

    while (!st.empty())
    {
        cout << st.top() << "  ";
        st.pop();
    }
}

void mygraph ::topologicalsortkahnsalgo()
{

    unordered_map<int, int> indegree;
    queue<int> qu;

    // generate indegree

    for (auto i : adjecent)
    {

        indegree[i.first];

        for (auto j : i.second)
        {

            indegree[j]++;
        }
    }

    for (auto i : indegree)
    {

        if (i.second == 0)
            qu.push(i.first);
        // cout << i.first << "-> "<<i.second<<endl;
    }

    vector<int> ans;

    while (!qu.empty())
    {
        int front = qu.front();
        qu.pop();
        ans.push_back(front);

        for (auto neighbor : adjecent[front])
        {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0)
            {
                qu.push(neighbor);
            }
        }
    }

    for (auto i : ans)
        cout << i << "  ";

    cout << "topologicalsor kahsn alog end---------------";
}

// for weighted graph

vector<int> mygraph ::sortestpathdijkstrasalgo(int src, int v)
{

    vector<int> dis(v, INT_MAX);

    // pair -> dis , vertices
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;

    dis[src] = 0;

    pq.push(make_pair(0, src));

    while (!pq.empty())
    {
        auto front = pq.top();
        pq.pop();

        for (auto neighbor : adjecentweighted[front.second])
        {

            if (dis[front.second] + neighbor.first < dis[neighbor.second])
            {

                dis[neighbor.second] = dis[front.second] + neighbor.first;
                pq.push(make_pair(dis[neighbor.second], neighbor.second));
                // auto record=pq.find()
            }
        }
    }

    return dis;
 }

vector<int> mygraph :: sortestpathBellmanFordAlgo(int srce, int v){
    
    vector<int> dis(v,INT_MAX);
    dis[srce]=0;

    for (int i = 0; i < v; i++)
    {
         for( auto vec : adjecentVec ){

            int src=vec[0];
            int dest=vec[1];
            int wt=vec[2];

            if(dis[src]!=INT_MAX)
                dis[dest]=min(dis[dest],dis[src]+wt);
         }
    }
    
      for( auto vec : adjecentVec ){

            int src=vec[0];
            int dest=vec[1];
            int wt=vec[2];

            if(dis[src]!=INT_MAX && dis[dest] > dis[src]+wt)
                        return ;
         }

         return dis;
 }

void mygraph :: MSTPrimsalgo (int src, int v)
{

    set<pair<int, int>> edge;
    vector<int> parent(v,-1);
    vector<bool> mst(v, false);
    vector<int> dis(v, INT_MAX);

      parent[src] = -1;
      edge.insert({0, src});
      dis[src] = 0;
      int ans = 0;

    while (!edge.empty())
    {
        auto top = *(edge.begin());
        edge.erase(edge.begin());
        int cost = top.first;
        int vertex = top.second;
        mst[vertex] = true;
        ans += cost;

        for( auto x : adjecentweighted[vertex]){

            int neighbor=x.first;
            int weight=x.second;

            if(!mst[neighbor] && dis[neighbor] > weight){

            auto record=  edge.find(make_pair(dis[neighbor],neighbor));
            if (record!=edge.end() )
            {
                edge.erase(record);
            }

            edge.insert({weight,neighbor});
            dis[neighbor]=weight;
            parent[neighbor]=vertex;

            }
        }
     }

  cout<<"MST COST IS  "<<ans<<endl;
}





int main()
{
    int v, u,edge, w,vertex;
    cout << "enter the size of graph and edge" << endl;
    cin >> vertex >> edge;

    mygraph gg;

    gg.addedge(0, 1);
    gg.addedge(1, 2);
    gg.addedge(2, 3);
    gg.addedge(2, 0);

    mygraph gd;

    // gd.addedgeDirected(0, 1);
    // gd.addedgeDirected(0, 2);
    // gd.addedgeDirected(1, 2);
    // gd.addedgeDirected(2, 3);

    // for (int i = 0; i < 9; i++)
    // {
    //     cin >> v >> u;
    //     gd.addedgeDirected(v, u);
    // }

    //    // gd.BFS(1);
    //     cout << endl;
    //     gg.DFSDisconnected();
    //     cout << endl;
    //     // gg.DFSDisconnected();

    //      gg.topologicalsortkahnsalgo();

    mygraph gweighted;

    for (int i = 0; i < edge; i++)
    {
        cin >> v >> u >> w;
        gweighted.addedgeweighted(v, u, w);
    }

    

   // gweighted.adjweighted();
    gweighted.MSTPrimsalgo(1, vertex+1);

    cout << " end------------";

    return 0;
}