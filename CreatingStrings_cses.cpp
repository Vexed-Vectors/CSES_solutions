#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MAX=1e9+7;
set <string> A;
void permute( string& a, int l, int r){
    if (l==r){
        A.insert(a);

    }
    else{
        for(int i=l ; i<=r;i++){
            swap(a[i],a[l]);
            permute(a, l+1,r);
            swap(a[i],a[l]);
        }

    }
}
int main(){
    string s;
    cin>>s;
    int n= s.size() -1 ;
    permute(s,0,n);
    cout<<A.size()<<"\n";
    for(auto x:A){
        cout<<x<<"\n";
    }
}
