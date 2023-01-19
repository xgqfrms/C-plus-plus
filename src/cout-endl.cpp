#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, world!";
    // cout << "line 2" << endl;
    cout << "line 2";
	// 1. cout 没有 << endl;
    printf("line 3");
	// 2. 导致 \n 无法换行 bug ❌
    printf("line 4 \n");
    cout << "line 5" << endl;
	// 3.  \n 换行 ✅
    printf("line 6 \n");
    printf("line 7");
    printf("\n");
    return 0;
}

/*
Hello, world!line 2line 3line 4 
line 5
line 6 
line 7
line 8

*/

/*
你可以用 "\n" 代替以上代码里的 endl。

#include <iostream>
using namespace std;
int main(){
  cout << "Hello, world!" << endl;
  cout << "Hello, world!" << "\n";
  return 0;
}

*/
