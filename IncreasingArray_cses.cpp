#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    ll prev=0,ans=0;

    for(int i=0;i<n;i++){
        ll x;

        cin>>x;
        if (i==0){
            prev=x;

        }
        else{
            if (x<prev){
                ans+=prev-x;

            }
            else
                prev=x;
        }
    }
    cout<<ans;

}
