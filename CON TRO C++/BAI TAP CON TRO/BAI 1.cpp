#include<iostream>
using namespace std;

int main(){
	int a;cin>>a;
	int b;cin>>b;
	int* k=&a;
	int* m=&b;
	int tong=*k+*m;
	cout<<tong;
	return 0;
}

