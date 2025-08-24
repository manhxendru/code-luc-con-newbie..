#include<bits/stdc++.h>
using namespace std;

double t(int);
int main(){
    int n;cin>>n;
    cout<<fixed<<setprecision(2)<<t(n)<<endl;
    return 0;
}
double t(int n){
    if(n==1) return 1;
    else return (double)1/n + t(n-1);
}