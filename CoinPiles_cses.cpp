#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    ll a,b;
    while(t--){
        cin>>a>>b;
        if (a<b)
            swap(a,b);
        if (a>2*b){
            cout<<"NO"<<"\n";
        }
        else{
            a%=3;
            b%=3;
            if (b>a)
                swap(a,b);
            if ((a==2 && b==1) || (a==0 && b==0)){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }
    }
}
