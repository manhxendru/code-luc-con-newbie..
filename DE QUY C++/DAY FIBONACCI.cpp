#include<bits/stdc++.h>
using namespace std;

double f(double n){
    if(n==1){
        return 1;
    }
    else{
        return 1/n+f(n-1);
    }
}
int main(){
    int n;cin>>n;
    cout<<fixed<<setprecision(2)<<f(n)<<endl;
    return 0;
}