#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n;cin>>n;
    if (n*(n+1)/2 % 2!=0){
        cout<<"NO"<<"\n";return 0;
    }
    cout<<"YES"<<"\n";
    vector <ll> v1,v2;
    if (n%2==0){
        cout<<n/2<<"\n";
        for(int i=0;i<=n-4;i+=4){
            cout<<i+1<<" "<<i+4<<" ";

        }
        cout<<"\n";
        cout<<n/2<<"\n";
        for(int i=0;i<=n-4;i+=4){
            cout<<i+2<<" "<<i+3<<" ";

        }

    }
    else{
        for(int i=n;i>3;i-=4){
            v1.push_back(i);v1.push_back(i-3);v2.push_back(i-1);v2.push_back(i-2);

        }
        v1.push_back(1);v1.push_back(2);v2.push_back(3);
        cout<<n/2 + 1<<"\n";
        for(auto x:v1)cout<<x<<" ";cout<<"\n";
        cout<<n/2<<"\n";
        for(auto x:v2)cout<<x<<" ";cout<<"\n";
    }



}
