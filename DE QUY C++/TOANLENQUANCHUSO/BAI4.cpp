#include<bits/stdc++.h>
using namespace std;

int t(int);
int main(){
    int n;cin>>n;
    cout<<t(n)<<endl;
    return 0;
}
int t(int n){
    if(n<10){
        return 1;
    }
    else{
        int tmp = t(n/10);
      return n%10>tmp ? n % 10 : tmp;
    }
}