#include<bits/stdc++.h>
#define MAX 100005
#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define f first
#define s second

using namespace std;

int n,m;
bool visited[MAX];
vector <vector<int>> a(MAX);
int parent[MAX];

int st=-1;int en=-1;
bool dfs(int n, int par){
    visited[n]=1; parent[n]=par;
    for(int i:a[n]){
        if (visited[i]){
            if (parent[n] != i){

                st= i; en=n; parent[i] = n;return true;
            }
        }
        else{
            if (dfs(i,n)) return true;
        }
    }
    return false;
}



signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    while(m--){
        int x,y;cin>>x>>y;
        a[x].pb(y); a[y].pb(x);
    }
    for(int i=1;i<=n;i++){
        if (!visited[i]){
            if (dfs(i,-1)){
            vector <int> ans;
            int t=en;
            while(en!=st){
                ans.pb(parent[en]);
                en = parent[en];
            }
            ans.pb(t);ans.pb(parent[t]);

            cout<<ans.size()<<"\n";
            for(auto x:ans)cout<<x<<" ";
            return 0;
        }
        }
    }

        cout<<"IMPOSSIBLE";
    }



