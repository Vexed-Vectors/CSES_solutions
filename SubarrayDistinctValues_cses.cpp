#include<bits/stdc++.h>

#define pb push_back
#define ll long long
#define pii pair<int,int>
#define f first
#define s second

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;cin>>n>>k;
    int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
    map <int,int> mp;
    ll cnt=0;
    int j=0;
    for(int i=0;i<n;i++){

        while(j<n && ((int)mp.size()<k || mp.count(arr[j])>0)){
            mp[arr[j]]++; j++;
        }
        cnt+= j-i;

        mp[arr[i]]--;
        if (mp[arr[i]] == 0)mp.erase(arr[i]);

    }
    cout<<cnt;



}
