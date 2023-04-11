#include <iostream>
#include <vector>

using namespace std;

bool is_safe(vector<vector<int>> arr, int x, int y, int n, vector<vector<int>> visited)
{
    if (arr[x][y] == 1 && (0<=x && x < n) && (0<=y && y < n ) && visited[x][y] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void mazerunning(vector<vector<int>> arr, int x, int y, int n, string anspath, vector<string> &ans, vector<vector<int>>& visited)
{

    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(anspath);
        return;
    }

    visited[x][y] = 1;
    // rigth

    if (is_safe(arr, x, y + 1, n, visited))
    {
        anspath.push_back('R');
        mazerunning(arr, x, y + 1, n, anspath, ans, visited);
        anspath.pop_back();
    }

    // down

    if (is_safe(arr, x + 1, y, n, visited))
    {
        anspath.push_back('D');
        mazerunning(arr, x + 1, y, n, anspath, ans, visited);
        anspath.pop_back();
    }

    // up

    if (is_safe(arr, x - 1, y, n, visited))
    {
        anspath.push_back('U');
        mazerunning(arr, x - 1, y, n, anspath, ans, visited);
        anspath.pop_back();
    }

    // left

    if (is_safe(arr, x, y - 1, n, visited))
    {
        anspath.push_back('L');
        mazerunning(arr, x, y - 1, n, anspath, ans, visited);
        anspath.pop_back();
    }
    visited[x][y] = 0;
}

int main()
{

    int input, inputcopy, counter = 0;
    cin >> input;
    vector<vector<int>> arr(input, vector<int>(input));
    string anspath = "";
    vector<string> ans;
    vector<vector<int>> visited(5, vector<int>(5, 0));

    // input arr for maze path

    for (int i = 0; i < input; i++)
    {

        for (int J = 0; J < input; J++)
        {
            cin >> arr[i][J];
        }
    }

    //         arr=    {{1,0,1,0,1},
    //                 {1,1,1,1,1},
    //                 {0,1,0,1,0},
    //                 {1,1,1,1,1},
    //                 {1,1,1,1,1}};

    mazerunning(arr, 0, 0, input, anspath, ans, visited);

    //   for (int i = 0; i < input; i++)
    //  {

    //     for (int J = 0; J < input; J++)
    //     {
    //         cout<< visited[i][J];
    //     }
    //     cout<<endl;
    // }

    // ans output

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}