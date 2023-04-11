vector<int> mergekarr(vector<vector<int>> arr)
// {

//     vector<int> ans;

//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

//     vector<int> indx(arr.size(), 0);

//     for (int i = 0; i < arr.size(); i++)
//     {
//         pq.push({arr[i][0], i});
//     }

//     while (!pq.empty())
//     {
//         pair<int, int> temp = pq.top();
//         pq.pop();

//         ans.push_back(temp.first);

//         if (indx[temp.second] + 1 < arr[temp.second].size())
//         {
//             indx[temp.second]++;
//             pq.push({arr[temp.second][indx[temp.second]], temp.second});
//         }
//     }

//     return ans;
// }