#include<bits/stdc++.h>
using namespace std;
void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout <<*it<<" ";

}

int main(){
    int n;
    cin>>n;
    deque<int> ans;
    if (n==2 || n==3)
        cout<<"NO SOLUTION";
    else if (n==4){
        cout<<"2 4 1 3";
    }
    else{
        if (n%2==1){
            for(int i=n;i>=1;i-=2){
                ans.push_back(i);
            }
            for(int i=2;i<=n-1;i+=2){
                ans.push_front(i);
            }
        }
        else{
            for(int i=n-1;i>=1;i-=2){
                ans.push_back(i);
            }
            for(int i=2;i<=n;i+=2){
                ans.push_front(i);
            }
        }
        showdq(ans);
    }
}
