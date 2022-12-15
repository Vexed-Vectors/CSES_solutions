#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int m=1e9+7;

ll binmod(int a, int b, int mod){
    if (b==0)
        return 1;
    ll res = binmod(a,b/2,mod);
    if (b%2==1)
        return (((res*res)%mod)*a)%mod;
    else
        return (res*res)%mod;
}

int main(){
    int n;cin>>n;
    while(n--){
        int a,b,c; cin>>a>>b>>c;
        int power=binmod(b,c,m-1);
        cout<<binmod(a,power,m)<<"\n";

    }

}
