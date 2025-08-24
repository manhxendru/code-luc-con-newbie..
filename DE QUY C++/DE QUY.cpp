#include<iostream>
using namespace std;

int so(int k){
    if(k>0){
        return k + so(k-1);
    }
    else{
        return 0;
    }
}
int main(){
    int n=so(10);
    cout<<n<<endl;
    return 0;
}
