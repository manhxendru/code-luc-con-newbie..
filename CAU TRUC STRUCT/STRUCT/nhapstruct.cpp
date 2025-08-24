#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int age;
};
int main(){
    student s1;
    cout<<"Nhap ten : ";
    cin>>s1.name;
    cout<<"Nhap tuoi : ";
    cin>>s1.age;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    return 0;
}