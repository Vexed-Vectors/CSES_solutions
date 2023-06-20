#include<bits/stdc++.h>

#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define f first
#define s second
#define ll long long
#define MAX 1000000007
using namespace std;


ll modular_binay_exponentiation(int base, int exponent){
    if (exponent == 0 )
        return 1;
    ll result = modular_binay_exponentiation(base, exponent/2);
    if (exponent%2==1) return (((result*result)%MAX)*base)%MAX;
    else return (result*result)%MAX;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    if (n%2==1){cout<<0;return 0;}
    n/=2;
    vector <ll> valid_bracket_sequences(n+1);
    valid_bracket_sequences[0] = 1;
    for(int i=1;i<=n;i++){
        valid_bracket_sequences[i] = ((((4*i-2)*modular_binay_exponentiation(i+1,MAX-2))%MAX)*valid_bracket_sequences[i-1])%MAX;
    }
    cout<<valid_bracket_sequences[n];


}
