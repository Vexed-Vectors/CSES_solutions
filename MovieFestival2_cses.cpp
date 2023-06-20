#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define f first
#define s second
#define MAXN 200005
using namespace std;


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;cin>>n>>k;
    vector <pii> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].s>>v[i].f;

    }
    // sorting v by end times
    sort(v.begin(), v.end());
    multiset <int> s;
    for(int i=0;i<k;i++){
        s.insert(0);
    }
    int maxval=0;
    for(int i=0;i<n;i++){
        auto it = s.upper_bound(v[i].s);
        if (it == s.begin())continue;
        else{
            s.erase(--it);
            s.insert(v[i].f);++maxval;
        }
    }
    cout<<maxval;


}
