#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    double c = static_cast <double>(a)+b;
    cout<<fixed<<setprecision(5)<<c/2;
    return 0;
}
