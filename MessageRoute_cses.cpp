#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define vi vector<int>
#define f first
#define s second
#define MAX 100005
using namespace std;



signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;cin>>n>>m;
    vi dist(n+1, INT_MAX);
    vi parent(n+1);
    vector <vi> adj_list(n+1);
    while(m--){
        int a,b;cin>>a>>b;
        adj_list[a].pb(b);adj_list[b].pb(a);
    }

    queue <int> q;
    dist[1]=0;q.push(1);
    while(!q.empty()){
        int x=q.front();q.pop(); // front element pe ab operation hone hai
        for(int i:adj_list[x]){
            if (dist[i] == INT_MAX){
                dist[i] = dist[x]+1;
                parent[i] = x;
                q.push(i);

        }

    }
    }
    if (dist[n] == INT_MAX)cout<<"IMPOSSIBLE\n";
    //backtracking to one from n
    else{
        vi ans; int t=n;
        ans.pb(n);
        cout<<dist[n]+1<<"\n";
        while(t!=1){
            ans.pb(parent[t]);t=parent[t];

        }
        reverse(ans.begin(), ans.end());
        for(auto x:ans)cout<<x<<" ";

    }
}



