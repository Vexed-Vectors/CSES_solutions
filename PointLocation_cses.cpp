#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    ll det= (x2-x1)*(y3-y1) - (y2-y1)*(x3-x1);
    if (det<0)cout<<"RIGHT"<<"\n";
    else if (det>0)cout<<"LEFT"<<"\n";
    else cout<<"TOUCH"<<"\n";
    }


}
