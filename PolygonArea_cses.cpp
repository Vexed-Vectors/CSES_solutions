#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;cin>>n;
    ll xs[n+1],ys[n+1];
    for(ll i=0; i<n;i++){
        cin>>xs[i]>>ys[i];
    }
    xs[n]=xs[0];ys[n]=ys[0];
    ll ans=0;
    for(int i=0;i<n;i++){
            //determinant sum
        ans+= xs[i]*ys[i+1];ans-=xs[i+1]*ys[i];
    }
    cout<<abs(ans)<<"\n";




}
