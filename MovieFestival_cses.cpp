#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    vector <pair<ll,ll>> m;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        m.push_back({b,a});

    }
    sort(m.begin(),m.end());
    ll run = m[0].first;
    ll res=1;
    for(int i=1;i<n;i++){
        if (m[i].second>=run){
            run=m[i].first;res+=1;
        }

    }
    cout<<res;


}
