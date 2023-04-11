#include <bits/stdc++.h>
#include <queue>

using namespace std;

vector<int> mergekarr(vector<vector<int>> arr)
{

    vector<int> ans;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> indx(arr.size(), 0);

    for (int i = 0; i < arr.size(); i++)
    {
        pq.push({arr[i][0], i});
    }

    while (!pq.empty())
    {
        pair<int, int> temp = pq.top();
        pq.pop();

        ans.push_back(temp.first);

        if (indx[temp.second] + 1 < arr[temp.second].size())
        {
            indx[temp.second]++;
            pq.push({arr[temp.second][indx[temp.second]], temp.second});
        }
    }

    return ans;
}

void inputfor2darr(vector<vector<int>>& arr, int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void print1darr(vector<int> vec)
{

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{

    vector< vector< int > > input(5);
   // inputfor2darr(input, 5, 5);

    //    for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cin >> input[i][j];
    //     }
    // }

    vector<int> ans ={1,2,3,4,5,6,7};
    make_heap(ans.begin(),ans.end()); 

    print1darr(ans);

    
}