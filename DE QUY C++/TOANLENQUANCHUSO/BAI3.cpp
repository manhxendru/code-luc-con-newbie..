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
        if(n%2==1) return 0;
        else return n;
    }
    else{
        if(n%2==1) return d(n/10);
        else return n%10+d(n/10);
    }
}