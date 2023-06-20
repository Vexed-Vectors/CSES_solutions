#include<bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
using namespace std;
// n< 5000 n swaure karna hao
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,target;cin>>n>>target;
    vector<pii> arr; // val,index
    for(int i=1;i<=n;i++){
        int a;cin>>a; pii p = {a,i}; arr.pb(p);
    }
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        int l,r; l=0;r=n-1; // low high two sum mein break karlein
        while(l!=r){
            int x; x = target - arr.at(i).first;
            if (l!=i && r!= i && arr.at(l).first + arr.at(r).first == x){
                cout<<arr.at(i).second<< " " << arr.at(l).second<< " " << arr.at(r).second <<"\n";
                return 0;
            }
            if (arr.at(l).first + arr.at(r).first < x)l++;
            else r--;

        }
    }
    cout<<"IMPOSSIBLE";
}
