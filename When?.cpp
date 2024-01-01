#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
void soln(){
    ll k,tp=0; cin>>k;
    for(int i=0;k>=60;i++){
        k=k-60;
        tp++;
    }
    if(k<10){
        cout<<21+tp<<":"<<"0"<<k;
    }else{
        cout<<21+tp<<":"<<k;
    }
}
int main(){
    ll t=1; 
    // cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
