#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;cin>>n;
	//map <ll,ll> mp;
	ll values[n];
	for (ll i = 0; i < n; i++)
	{

		ll x;
		cin>>x;
		values[i]=x;
		//mp[x]++;
	}
	/*multimap <ll,ll> mp2;
	for(auto x:mp){
		mp2.insert({x.second,x.first});
	}

	ll ans=0;
	pair <ll,ll> first=*mp2.rbegin();
	ll val=first.second;
    ll freq=first.first;
	pair<ll,ll> last=*mp2.begin();
	ll start=last.first;

	if (freq>start){
	for(map<ll,ll>::iterator i=mp2.begin()++;i!=--mp2.end();i++){
		pair <ll,ll> now=*i; ll cur=now.second;ll times=now.first;
        //cout<<cur<<" ";
		ans+= abs(val-cur) * times;

	}
	cout<<ans<<"\n";
	}*/

        ll mid= n/2;
        sort(values, values+n);
        ll ans=0;
        for(ll i=0;i<n;i++){
            ans+= abs(values[i]- values[mid]);
        }
        cout<<ans<<"\n";



	}



