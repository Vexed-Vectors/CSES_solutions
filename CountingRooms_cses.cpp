#include <bits/stdc++.h>
using namespace std;

int visited[1004][1004];
char grid[1004][1004];

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int rooms=0;
int n,m;
bool isValid(int y, int x){
    if (x<0 || y<0)return false;
    if (x>=m || y>=n)return false;
    if (grid[y][x] == '#')return false;
    return true;
}

void dfs(int y, int x){
   visited[y][x] = 1;
   for(int i=0;i<4;i++){
        int newx = x+ dx[i];
        int newy = y+ dy[i];
        if (isValid(newy,newx)){
            if (!visited[newy][newx])
                dfs(newy,newx);
        }
   }
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j]; visited[i][j]=0;
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (grid[i][j] == '.' && !visited[i][j]){
                dfs(i,j);rooms+=1;
            }
        }
    }
    cout<<rooms;

}
