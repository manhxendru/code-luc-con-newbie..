#include<bits/stdc++.h>
using namespace std;

int d(int);
int main(){
    int n;cin>>n;
    cout<<d(n)<<endl;
    return 0;
}
int d(int n){
    if(n<10){
        return 1;
    }
    else{
        return 1+d(n/10);
    }
}