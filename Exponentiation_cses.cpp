#include<bits/stdc++.h>
#define M  1e9+7
using namespace std;

typedef long long ll;

ll MOD(ll a,ll b,ll n){
    ll ans;
    if (b==0){
        ans=1;
        return 1;
    }
    if (b%2==0){
        ans = (MOD(a,b/2,n)*MOD(a,b/2,n))%n;
        return ans;

    }
    else{
        ans = (MOD(a,b-1,n)*a)%n;
        return ans;
    }

}
int main(){
    ll n;
    cin>> n;
    ll a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cout<<MOD(a,b,M)<<"\n";
        }
}
