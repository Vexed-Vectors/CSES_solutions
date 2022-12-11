#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
ll a[N],pf[N];
int main(){
    ll n,m;
    cin>>n;
    m=n;
    ll ans=0;
    int i=1;
    while(pow(5,i)<=n){
        ans+= n/pow(5,i);
        i+=1;

    }
    cout<<ans;

}
