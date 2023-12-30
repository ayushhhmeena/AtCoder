#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll arr[5];
    ll tp=0,tp2=0,n1=0,n2=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        if(i==0){
            tp=arr[i];
            continue;
        }
        if(tp!=arr[i]){
            tp2=arr[i];
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]==tp){
            n1++;
        }else if(arr[i]==tp2){
            n2++;
        }
    }
    if( (n1==3 && n2==2) || (n1==2 && n2==3) ){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
