#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;cin>>n;
    ll o=1,e=0;

    while(n>0){
        for(ll i=2;i<=n;i+=2){
            cout<<o*i + e<<" ";
        }
        if (n&1){
            cout<<o+e<<' ';e+=o;
        }
        else{
            e-=o;
        }
        o = (o<<1);n = (n>>1);
    }

}
