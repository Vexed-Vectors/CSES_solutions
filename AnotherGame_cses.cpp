#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define f first
#define s second

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
    int n;cin>>n;int arr[n];
    int flag=0;
    for(int i=0;i<n;i++){

        cin>>arr[i];

        if (arr[i]%2==1){flag=1;}
    }
    string ans = (flag>0)? "first":"second";
    cout<<ans<<"\n";
}

}
