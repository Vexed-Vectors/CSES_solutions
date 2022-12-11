#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    vector <pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        v.push_back({a,1});v.push_back({b+1,-1});

    }
    sort(v.begin(),v.end());
    vector <int> ps(2*n+1);
    ps[0]=0;
    for(int i=1;i<2*n+1;i++){
        ps[i]=v[i-1].second + ps[i-1];
    }
    int ans=0;
    for(int i=0;i<2*n+1;i++){
        if (ps[i]>ans)
            ans=ps[i];
    }
    cout<<ans;

}






