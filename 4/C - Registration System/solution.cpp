#include<bits/stdc++.h>
using namespace std;
 
int main() {
    unordered_map <string ,int> ump;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        if(ump.find(str)==ump.end()){
            
            cout<<"OK"<<endl;
        }
        else{
            cout<<str<<ump[str]<<endl;
        }
        ump[str]++;
    }
  return 0;
}