#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define f first
#define s second

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    stack <pii> s;
    s.push({0,0});
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        while(!s.empty() && s.top().f>=a)s.pop();
        cout<<s.top().s<<" ";
        s.push({a,i});
    }


}

