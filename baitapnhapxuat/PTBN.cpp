#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;

    cout << "gia tri a: ";
    cin >> a;
    cout << "gia tri  b: ";
    cin >> b;
    if (a != 0) {
        double x = -b / a;
        cout << "nghiem cua ptrinh la " << a << "x + " << b << " = 0 là: ";
        cout << fixed << setprecision(5) << x << endl;
    }
    return 0;
}

