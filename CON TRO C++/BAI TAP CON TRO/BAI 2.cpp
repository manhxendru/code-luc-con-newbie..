#include<iostream>
using namespace std;

int dao(int*x,int* y){
	int z=*x;
	*x=*y;
	*y=z;
}
int main(){
	int x;cin>>x;
	int y;cin>>y;
	dao(&x,&y);
	cout<<x<<endl;
	cout<<y;
    return 0;	
}
