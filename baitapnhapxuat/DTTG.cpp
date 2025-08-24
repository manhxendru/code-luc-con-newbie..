#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double p=(a+b+c)/2.0;
    double S=sqrt(p*(p-a)*(p-b)*(p-c));
     cout << fixed << setprecision(5);
    cout<<"dt tam giac la "<<S;
    return 0;
}
