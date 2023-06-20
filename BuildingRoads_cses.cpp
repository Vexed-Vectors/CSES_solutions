#include<bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define MAX 100005
using namespace std;

int n,m, ans=0;
bool visited[MAX];
vector <vector<int>> adj_list(MAX);

void dfs(int current){
    visited[current] = true;
    for(int next:adj_list[current]){
        if (!visited[next]){
            dfs(next);
        }

    }
}


int pich=1;
int naya=0;
vector <pair<int,int>> roads;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    while(m--){
        int a,b;cin>>a>>b;
        adj_list[a].pb(b);
        adj_list[b].pb(a);
    }
    for(int i=1;i<=n;i++){
        if (!visited[i]){
            if (i!=1) roads.pb({1,i});
            dfs(i);ans+=1;
        }
    }
    cout<<roads.size()<<"\n";
    for(auto x:roads){
        cout<<x.f<<" "<<x.s<<"\n";
    }



}
