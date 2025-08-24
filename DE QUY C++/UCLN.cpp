#include<bits/stdc++.h>
using namespace std;

int x(int a,int b){
    if(b==0){
        return a;
    }
    return x(b,a%b);
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int k=x(b,a);
    cout<<k;
    return 0;
}
