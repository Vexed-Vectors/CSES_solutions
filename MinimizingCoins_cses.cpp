#include<bits/stdc++.h>

#define pb push_back
#define pob pop_back
#define f first
#define s second
#define vi vector<int>
#define pii pair<int,int>
#define int long long
# define fass ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define N  101
using namespace std;

const int MAX = 1e9+7;
/* vector <int> dp(N);
/*DICE COMBINATIONS*/


vector <int> dp(1000001);

signed main(){
    int n,x;cin>>n>>x;
    vector <int> arr(n);for(int i=0;i<n;i++)cin>>arr[i];
    dp[0] = 0;
    for(int i=1;i<=x;i++)dp[i] = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<=x;j++){
            if (j - arr[i]>=0){
                dp[j] = min(dp[j], dp[j-arr[i]]+1);
            }
        }
    }
    //for(int i=0;i<=x;i++)cout<<dp[i]<<" ";cout<<"\n";
    cout<< ((dp[x]==INT_MAX)? -1:dp[x]);




}
