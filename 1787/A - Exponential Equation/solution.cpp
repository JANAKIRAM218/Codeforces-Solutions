#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        if(n%2==0){
            int x=n/2;
            cout<<1<<" "<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        t--;
    }
  return 0;
}