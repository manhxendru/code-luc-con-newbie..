#include<iostream>
#include<string>
using namespace std;

int main(){
    string k="pizza";
    string* n =&k;
    cout<<k<<endl;
    cout<<&k<<endl;
    cout<<n;
    return 0;
}
