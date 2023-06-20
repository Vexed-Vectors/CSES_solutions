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
    int n;cin>>n;
    int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
    vector <int> v(n);
    int pref=0;v[pref]=1;
    for(int i=0;i<n;i++){
        pref+= arr[i];
        v[(pref%n + n)%n]++;
    }
    int ans=0;
    for(auto x:v){
        ans+= x*(x-1)/2;
    }
    cout<<ans;




}
