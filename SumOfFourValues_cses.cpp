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
    int n;cin>>n;int x;cin>>x;

    vector <int> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    map <int , pii> mp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1 ; j<n;j++){
            if (mp.count(x- v[i] - v[j] )){
                cout<< i+1 << " "<< j+1<< " "<<mp[x- v[i] - v[j]].f +1<<" "<<mp[x- v[i] - v[j]].s+1;
                return 0;
            }

        }
        for(int j=0;j<i;j++){
            mp[v[i] + v[j] ] = {i,j};
        }
    }
    cout<<"IMPOSSIBLE";

}
