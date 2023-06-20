#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define popb pop_back
#define pii pair<int,int>
#define f first
#define s second

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);int sum=0;for(int i=0;i<n;i++)sum+= arr[i];
    int q=0,w=0;
    int a=0,s=0;s+=arr[n-1];w=n-1;
    for(int i=0;i<n;i++){
        if (a<=s){
            if (q!=w){
            a+=arr[i];q+=1;
            }
            else{
                int wait= s-a;
                a+= wait;
                a+=arr[w];i=w;
            }
        }
        else{
            cout<<sum;return 0;

        }
    }
    cout<<a;





}
