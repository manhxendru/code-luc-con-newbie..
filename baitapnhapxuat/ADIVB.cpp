#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    double c = static_cast<double>(a) / b;
    cout << fixed << setprecision(3) << c << endl;
    cout<<a%b<<endl;
    cout<<a/b;
    return 0;
}
