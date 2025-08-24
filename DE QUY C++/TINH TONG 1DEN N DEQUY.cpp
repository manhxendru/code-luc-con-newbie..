#include<iostream>
using namespace std;

int tong(int x){
    if(x>0){
        return x+tong(x-1);
    }
    else{
        return 0;
    }
}
int main(){
    int k;
    cin>>k;
    int h=tong(k);
    cout<<h;
    return 0;
}
