#include<bits/stdc++.h>
using namespace std;

struct sinhvien
{
	char a;
	string s;
	int age;
};
int main() {
	sinhvien stray;
	cout << "Nhap ten : ";
	getline(cin, stray.s);
	cout << "Nhap tuoi : ";
	cin >> stray.age;
	cout << "Nhap 1 ki tu : ";
	cin >> stray.a;
	cout << "Ten : " << stray.s << endl;
	cout << "Tuoi : " << stray.age << endl;
	cout << "Ki tu vua nhap la : " << stray.a << endl;
	return 0;
}