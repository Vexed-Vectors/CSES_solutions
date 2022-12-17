#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    ll ans=0,mx=INT_MIN;
    for(int i=0;i<n;i++){
        ans = max(arr[i], ans+arr[i]);
        mx= max(ans,mx);
    }
    cout<<mx;


}
