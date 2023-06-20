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
    int n,x;cin>>n>>x;
    int pref[n+1];
    pref[0]=0;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        pref[i] = pref[i-1]+a;
    }
    int ans=0;
    map <int,int> mp;
    for(int i=0;i<=n;i++){
        ans+= mp[pref[i]-x];
        mp[pref[i]]++;
    }
    cout<<ans;
}
