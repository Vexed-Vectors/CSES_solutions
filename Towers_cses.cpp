#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int n;cin>>n;
    vector <ll> arr;
    for(int i=0;i<n;i++){
        ll z;cin>>z;
        ll low=0,hi=(ll)arr.size();
        while(low<hi){
            ll mid= (low+hi)/2;
            if (arr[mid]>z)hi=mid;
            else low=mid+1;
        }
        if (low== (ll)arr.size())arr.push_back(z);
        else arr[low]=z;
    }

    cout<<arr.size();


}
