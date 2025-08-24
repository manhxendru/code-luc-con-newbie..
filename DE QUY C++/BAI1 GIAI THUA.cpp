#include <iostream>

using namespace std;

//Hàm đệ quy tính giai thừa
int factorial(int n){
  if(n==1){
    return 1;
  }
  else{
    return n*factorial(n-1);
  }
}

//Hàm main
int main() {
  int n;
  int result;
  //Gọi hàm tính giai thừa trong hàm main và lưu trữ kết quả trong biến result
  cin >> n;
  result = factorial(n);
  //In ra giá trị của biến result
  cout << "The factorial of " << n << " is " << result;
}
