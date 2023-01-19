#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  int sum = a + b;
  cout << sum << endl;
  // auto 定义的变量，必须初始化值 ✅
  auto x = 4; //integer
  auto y = 3.37; //float
  auto z = "hello"; //string 
  cout << x << endl;
  cout << y << endl;
  cout << z << endl;
  // ❌ 
  auto bug;
  bug = 404;
  return 0;
}


