#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define f first
#define s second
#define MAX 200003
using namespace std;

vector <vector<int>> adj(MAX);
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    for(int i=1;i<=n-1;i++){
        int a,b;cin>>a>>b;
        adj[a].pb(b);adj[b].pb(a);

    }
}
