#include<bits/stdc++.h>
using namespace std;

int d(int);
int main(){
    int n;cin>>n;
    cout<<d(n)<<endl;
    return 0;
}
int d(int n){
    if(n==1) return 1;
    else return n*n+d(n-1);
}