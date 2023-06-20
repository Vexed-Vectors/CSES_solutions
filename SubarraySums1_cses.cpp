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

    int n,x;cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int l=0, r=0;
    int sum = 0, cnt=0;
    while(r<n){
        sum+= arr[r];
        while(sum>= x){
            if (sum==x)cnt+=1;
            sum-=arr[l];l++;
        }
        r++;
    }
    cout<<cnt;





}
