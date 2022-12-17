#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n;
    cin>>n;
    ll k[n];
    unordered_set <ll> s;
    for(int i=0;i<n;i++){
        cin>>k[i];



    }
    ll start=0,mx=0;
    for(int i=0;i<n;i++){
        s.insert(k[i]);

        if (i-start+1!= s.size()){

            mx= max(mx,(ll)s.size());s.clear();start=i;s.insert(k[i]);
        }
        mx=max(mx,(ll)s.size());


    }

    cout<<mx;




    }

