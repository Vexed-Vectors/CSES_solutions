#include <bits/stdc++.h>
typedef long long ll;
using namespace std;



int main(){
    int n;
    cin>>n;
    vector <ll> k(n);
    unordered_set <ll> s;
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    vector<ll>::iterator it = k.begin()--;
    k.begin()++;

    ll ans=0;
    for(vector<ll>::iterator i=k.begin();i<k.end();i++){
        s.insert(*i);
        ans = max(ans,(ll)s.size());

        if (s.size()!= i-it+1){
            //cout<<"YO"<<s.size()<<" "<<i-it+1<<"\n";


            vector<ll>::iterator st = find(it,i,*i);
            for(auto j=it; j!=st;j++){
                s.erase(*j);
            }
            //cout<<*st<<"\n";
            it = ++st;

            s.insert(*i);ans = max(ans,(ll)s.size());


        }
        //cout<<*it<<"\n";

    }
    //for(auto x:s) cout<<x<<" ";cout<<"\n";

    cout<<ans<<"\n";




    }

