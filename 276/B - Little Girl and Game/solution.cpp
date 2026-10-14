#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin>>a;
    int freq[26]={0};
    for(auto i :a){
        freq[i-'a']++;
       
    }
    int odd_count=0;
    for(int i=0;i<26;i++){
        if(freq[i]%2!=0){
            odd_count+=1 ;
        }
        
        
    }
    if(odd_count%2!=0 || odd_count==0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
  return 0;
}