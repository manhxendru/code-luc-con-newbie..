#include<bits/stdc++.h>
using namespace std;

int t(int);
int main(){
    int n;cin>>n;
    cout<<t(n)<<endl;
    return 0;
}
int t(int n){
    if(n==1) return 1;
    else return n+t(n-1);
}