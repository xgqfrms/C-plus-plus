#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    // cin >> a;
    // cin >> b;
    // 等价于，cin 链式调用
    cin >> a >> b;
    int sum = a + b;
    cout << sum;
    // cout << sum << endl;
    return 0;
}
