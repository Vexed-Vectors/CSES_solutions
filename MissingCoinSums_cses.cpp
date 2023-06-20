#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;cin>>n;
    ll p[n],pref[n+1];
    pref[0]=0;
    for(int i=0;i<n;i++){
        cin>>p[i];

    }
    sort(p,p+n);
    ll index=0;
    ll ones=0,twos=0;
    for(auto x:p){
        if (x==1){
            ones+=1;index+=1;
            }
        else if (x==2){
            twos+=1;index+=1;
        }
        else
            break;
    }
    ll res =0;
    if (ones==0){
        cout<<1;exit(0);
    }
    else{
        res = (twos*2 + ones);
        for(ll i=index; i<n;i++){
            if (res>=p[i]-1){
                res+=p[i];
            }
            else{
                cout<<res+1;exit(0);
            }
        }
        cout<<res+1;exit(0);



    }

    }


