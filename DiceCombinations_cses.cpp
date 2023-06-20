#include<bits/stdc++.h>

#define pb push_back
#define pob pop_back
#define f first
#define s second
#define vi vector<int>
#define pii pair<int,int>
#define int long long
# define fass ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define N  1e6
using namespace std;

const int MAX = 1e9+7;
/* vector <int> dp(N);
/*DICE COMBINATIONS*/
vector <int> dp(N,-1);
int dice(int n){
    if (n<0)return 0;
    if (n==0) return 1;
    if (dp[n]!= -1)return dp[n];
    int ans=0;
    for(int i=1;i<=6;i++){
        int remainder = n-i;
        ans += dice(remainder)%MAX;

    }
    dp[n] = ans;
    return dp[n];
}


signed main(){
    int n;cin>>n;
    cout<<dice(n);
}

