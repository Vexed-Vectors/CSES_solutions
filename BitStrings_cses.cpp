#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MAX=1e9+7;

int main(){
    ll n;
    cin>>n;
    ll res=1;
    for(ll i=1; i<=n; i++){
         res*=2;
         res= res%MAX ;
    }
    cout<<res;
}
