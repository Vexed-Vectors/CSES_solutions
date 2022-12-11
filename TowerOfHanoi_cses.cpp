#include<bits/stdc++.h>
using namespace std;

void Hanoi(int n, int i=1, int j=2,int k=3){
    if (n==1){
        cout<<i<<" "<<k;
        return;
    }
    if (n==2){
        cout<<i<<" "<<j<<"\n";
        cout<<i<<" "<<k<<"\n";
        cout<<j<<" "<<k<<"\n";
        return;
    }

        Hanoi(n-1,i,k,j);
        cout<<i<<" "<<k<<"\n";
        Hanoi(n-1,j,i,k);

}

int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<"\n";
    Hanoi(n,1,2,3);
}
