#include<bits/stdc++.h>
using namespace std;

int k(int);
int main(){
    int n;cin>>n;
    cout<<k(n)<<endl;
    return 0;
}

int k(int n){
    if(n<10){
        return 1;
    }
    else{
        return n%10+k(n/10);
    }
}