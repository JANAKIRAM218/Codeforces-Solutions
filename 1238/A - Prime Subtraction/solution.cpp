#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t>0){
        long long  x,y;
        cin>>x>>y;
        // cout<<x<<endl;
        long long  val=x-y;
        if(val!=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // cout<<val<<endl;
        
        t--;
    }
  return 0;
}