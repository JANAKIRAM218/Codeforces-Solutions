#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long  arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long  gcd_ans=arr[0];
    for(int i=1;i<n;i++){
        gcd_ans=gcd(arr[i],gcd_ans);
    }
    int count=0;
    for(long long i=1;i<=gcd_ans/i;i++){
        if(gcd_ans % i ==0){
            count+=1;
            if(i != gcd_ans/i){
                count+=1;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}