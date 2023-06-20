#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define f first
#define s second
#define MOD 1000000007
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll d[n+1];
    d[1]=0;
    d[2]=1;
    for(ll i=3;i<=n;i++)
    {
        d[i]=(((d[i-1]+d[i-2])%MOD)*(i-1))%MOD;
    }
    cout<<d[n];
}
