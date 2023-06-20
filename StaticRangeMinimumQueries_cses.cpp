#include<bits/stdc++.h>
#define int long long
#define MAX 200000
using namespace std;

vector <int> blocks;
int arr[MAX];
signed main(){
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int n,q;cin>>n>>q;
    int block_sz = sqrt(n);


    for(int i=0;i<n;i++)cin>>arr[i];

    int block_min = INT_MAX;
    for(int i=0;i<n;i+= block_sz){
        for(int j=i;j<i+block_sz;j++){
            if (arr[j]<block_min)block_min= arr[j];
        }
        blocks.push_back(block_min);
        block_min = INT_MAX;

    }
    while(q--){
        int a,b;cin>>a>>b;a-=1;b-=1;

        // checking the left partial overlap
        int ans=INT_MAX;
        while(a<b && a%block_sz!=0 && a!=0){
            ans = (ans>arr[a]) ? arr[a]:ans;a++;
        }
        while (a+block_sz-1<=b){
            ans = (ans> blocks[a/block_sz]) ? blocks[a/block_sz]: ans;a+=block_sz;
        }
        while(a<=b){
            // checking right partial overlap
            ans = (ans> arr[a])? arr[a]:ans;a++;
        }
        cout<<ans<<"\n";
    }



}
