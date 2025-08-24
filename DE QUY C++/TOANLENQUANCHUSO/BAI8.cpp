#include<bits/stdc++.h>
using namespace std;

int d(int,int);
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<d(a,n)<<endl;
    return 0;
}
int d(int a[],int n){
    if(n==0) return 0;
    else{
        if(a[n-1]%2==0){
            return a[n-1]+d(a,n-1);
        }
        else{
            return d(a,n-1);
        }
    }
}