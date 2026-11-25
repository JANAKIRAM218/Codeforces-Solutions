#include<bits/stdc++.h>
using namespace std;
 
int main() {
  long long  n;
  cin>>n;
  long long  ans;
  if(n<3){
      ans=n;
  }
  else if(n%2!=0){
      ans=1LL*n*(n-1)*(n-2);
      
  }
  else{
      if(n%3!=0){
          ans=1LL*n*(n-1)*(n-3);
      }
      else{
       ans=1LL*(n-1)*(n-2)*(n-3);   
      }
  }
  cout<<ans<<endl;
  return 0;
}