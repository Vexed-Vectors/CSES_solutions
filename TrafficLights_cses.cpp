#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll x,n;cin>>x>>n;
    ll low=0,high=x;
    for(int i=0;i<n;i++){
        ll z;cin>>z;
        ll mid=(low+high)/2;
        if (z>mid && z<high)high=z;
        else if (z<=mid && z>low) low=z;
        cout<<high-low<<" ";
    }


}
