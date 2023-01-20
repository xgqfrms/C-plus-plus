#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  //your code goes here
  for (int x = n; x > 0; x--) {
    // some code
    cout << x << endl;
    if(x % 5 == 0) {
      cout << "Beep" << endl;
    }
  }
  return 0;
}
