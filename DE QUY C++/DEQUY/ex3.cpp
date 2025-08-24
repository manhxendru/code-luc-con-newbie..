#include<bits/stdc++.h>
using namespace std;

int s(int n){
    if(n==0){
        return 0;
    }
    else{
        return n*n*n+s(n-1);
    }
}
int main(){
    int n;cin>>n;
    cout<<s(n)<<endl;
    return 0;
}