#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a;
    cout<<"nhap vao ban kinh ";
    cin>>a;
    double c = static_cast <double>(a)*2;
    cout<<fixed<<setprecision(5)<<c*3.14<<endl;
    return 0;
}
