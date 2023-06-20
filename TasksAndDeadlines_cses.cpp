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
    vector <pii> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i].first>>arr[i].second;
    sort(arr.begin(),arr.end());
    int time=0, reward=0;
    for(int i=0;i<n;i++){
        time+=arr[i].first; reward+= arr[i].second-time;
    }
    cout<<reward;


}
