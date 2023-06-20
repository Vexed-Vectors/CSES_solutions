#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define f first
#define s second
#define MAX 200005
using namespace std;

vector <vector<int>> adj_list(MAX);
vector <int> sub_size(MAX);

int fun(int node){
    if (adj_list[node].size() == 0)return 1;
    else{
    for(int i:adj_list[node]){
        sub_size[node]+= fun(i);
    }
    return sub_size[node] + 1;
    }

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    for(int i=2;i<=n;i++){
        int x;cin>>x;adj_list[x].pb(i);


    }
    fun(1);
    for(int i=1;i<=n;i++)cout<<sub_size[i]<<" ";


}
