bool is_safe(int x,int y,int **path,vector<vector<string>>  visited){
//         if (path[x][y]==1 && x<5 &&y<5 && visited[x][y]==0)
//         {
//             return true;
//         }else{
//             return false;
//         }
        
// }

// void mazerunning(int **path,int x,int y,string anspath,vector<string>&ans,vector<vector<string>> visited){

//     if (x==4&&y==4)
//     {
//         ans.push_back(anspath);
//         return;
//     }

//     visited[x][y]=1;
//     //rigth

//     if (is_safe(x,y+1,path,visited))
//     {
//         anspath.push_back('R');
//         mazerunning(path,x,y+1,anspath,ans,visited);
//         anspath.pop_back();
//     }
    

//     // down

//     if (is_safe(x+1,y,path,visited))
//     {
//         anspath.push_back('D');
//         mazerunning(path,x+1,y,anspath,ans,visited);
//         anspath.pop_back();
//     }

//     //up

//     if (is_safe(x-1,y,path,visited))
//     {
//         anspath.push_back('U');
//         mazerunning(path,x-1,y,anspath,ans,visited);
//         anspath.pop_back();
//     }

//     //left

//     if (is_safe(x,y-1,path,visited))
//     {
//         anspath.push_back('L');
//         mazerunning(path,x,y-1,anspath,ans,visited);
//         anspath.pop_back();
//     }
//      visited[x][y]=0;

// }