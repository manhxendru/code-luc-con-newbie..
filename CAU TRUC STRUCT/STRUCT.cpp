#include<iostream>
using namespace std;

int main(){
    struct{
        int so;
        char chu;
    }chuso;
    chuso.so=1;
    chuso.chu='a';
    cout<<chuso.so<<"\n";;
    cout<<chuso.chu;
    return 0;
}
