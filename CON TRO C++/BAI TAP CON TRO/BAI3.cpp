#include<iostream>
using namespace std;

int main(){
	int tong=0;
	int a[10];
	int* k;
	for(int i=0;i<10;i++){
		cin>>a[i];
		k=a;
	}
	for(int i=0;i<10;i++){
		tong=tong+*k;
		k++;
	}
	cout<<*k;
	return 0;
}
