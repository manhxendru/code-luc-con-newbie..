#include<iostream>
using namespace std;

int main(){
    int n,x;
    cout<<"nhap so nguyen n va x ";
    cin>>n>>x;
    int t=n/x;
    int r=n%x;
    cout<<"r = "<<r<<endl;
    cout<<"t = "<<t;
    return 0;
}
