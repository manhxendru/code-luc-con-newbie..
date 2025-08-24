#include<bits/stdc++.h>
using namespace std;

int pow(int x,int n){
        if(x==0){
            return 1;
        }
        else{
            return x*(x*(n-1));
        }
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<pow(a,b)<<endl;
    return 0;
}