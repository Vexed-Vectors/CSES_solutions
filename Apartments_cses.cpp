#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n],b[m];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0; i<m;i++){
        cin>>b[i];

    }
    sort(a,a+n);sort(b,b+m);
    int ans=0,it=0,ap=0;
    while(it<=m-1 && ap<=n-1){
        if (a[ap]<=b[it]+k){
            if (a[ap]>=b[it]-k){
                ans+=1;it+=1;ap+=1;
            }
            else{
                ap+=1;
            }
        }
        else{
            it+=1;
        }

    }
    cout<<ans;


}

