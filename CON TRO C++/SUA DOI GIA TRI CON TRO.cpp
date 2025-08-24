#include<iostream>
using namespace std;

int main(){
    string drink="cocacola";
    string* k=&drink;
    cout<<drink<<endl;;
    cout<<k<<endl;;
    *k="pepsi";
    cout<<drink<<endl;
    cout<<k;
    return 0;
}
