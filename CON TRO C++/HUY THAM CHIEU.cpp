#include<iostream>
using namespace std;

int main(){
    string k="pizza";
    string* n=&k;
    cout<<n<<endl;//in ra dia chi bo nho cua k
    cout<<*n;//in ra k, vi * o day la dung de huy &k
    return 0;
}
