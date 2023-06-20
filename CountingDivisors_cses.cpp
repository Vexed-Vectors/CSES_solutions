#include<bits/stdc++.h>
using namespace std;
using ll= int;
ll CountDivisors(ll x){
    ll count=0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            if(x/i!=i){
                count+=2;
            }else{
                count++;
            }
        }
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;

    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        cout<<CountDivisors(x)<<"\n";
    }
}
