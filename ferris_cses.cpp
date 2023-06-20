
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
    ll n,x;

    cin>>n>>x;
    bool entered[n];
    for(int i=0;i<n;i++){
        entered[i]=false;
    }
    ll p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    sort(p,p+n);
    ll ans=0;
    ll i=0,j=n-1;
    while(j>i){
        if (p[i]+p[j]>x){
            --j;
        }
        else{
            entered[i]=entered[j]=true;ans+=1;++i;j--;

        }
    }
    for(int i=0;i<n;i++){
        if (entered[i]==false)
            ans+=1;
    }
    cout<<ans;


}
