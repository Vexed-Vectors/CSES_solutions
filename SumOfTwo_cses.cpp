#include<bits/stdc++.h>
#define f .first
#define s .second
typedef long long ll;

using namespace std;

int main(){
    int n;ll t;cin>>n>>t;
    ll vals[n];
    for(int i=0;i<n;i++){
        cin>>vals[i];

    }
    map <ll,ll> mp;
    for(int i=0;i<n;i++){
        if (mp.count(t-vals[i])){
            cout<<i+1<<" "<<mp[t- vals[i]];
            return 0;
        }
        mp[vals[i]] = i+1;
    }
    cout<<"IMPOSSIBLE"<<"\n";

}
