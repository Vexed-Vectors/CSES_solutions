#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    ll x,n;cin>>x>>n;
    set <ll> poles{0,x};


    multiset <ll> sums{x};
    for(int i=0;i<n;i++) {
        ll pole;cin>>pole;
        auto it1= poles.upper_bound(pole);
        auto it2= it1;--it2;

        sums.erase(sums.find(*it1-*it2));sums.insert(pole - *it2);

        // second interval insert karna hai
        sums.insert(*it1-pole);
        poles.insert(pole);

        auto res=sums.end(); --res;
        cout<<*res<<" ";
    }
    }




