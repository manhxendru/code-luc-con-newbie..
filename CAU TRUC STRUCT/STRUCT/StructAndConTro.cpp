#include<bits/stdc++.h>
using namespace std;

struct student
{
	string name;
	int age;
	void run() {
		cout << name << " is running..." << endl;
	}
};
int main() {
	student st;
	cout << "Nhap ten: ";
	getline(cin, st.name);
	cout << "Nhap tuoi: ";
	cin >> st.age;
	cout << "Ten la : " << st.name << endl;
	cout << "Tuoi la : " << st.age << endl;
	st.run();
	return 0;
}