#include<bits/stdc++.h>
#define int long long
typedef long long ll;

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q;cin>>n>>q;
    int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
    int pref[n+1];
    pref[0]=0;for(int i=1;i<=n;i++)pref[i]=pref[i-1]+arr[i-1];

    while(q--){
        int a,b;cin>>a>>b;
        if (a!=b)cout<<pref[b]-pref[a-1]<<"\n";
        else cout<<arr[a-1]<<"\n";

    }


}
