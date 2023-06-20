#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define f first
#define s second
#define MAXN 200005
using namespace std;

vector <vector<int>> adj(MAXN);
vector <int> visited(MAXN);
int ans=0;
void dfs(int node, int parent){
    for(auto i:adj[node]){
        if (i!=parent){
            dfs(i,node);
            if (visited[i]==0 &&visited[node]==0){ans+=1; visited[i]=1; visited[node]=1;}
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++){
        int a,b;cin>>a>>b;adj[a].pb(b);adj[b].pb(a);
    }
    dfs(1,0);
    cout<<ans;


}
