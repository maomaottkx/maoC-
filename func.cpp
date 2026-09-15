
#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}

int max3(int a, int b, int c) {//函数原型声明
    int m = a;          // 先假设 a 最大
    if (b > m) {        // b 更大？
        m = b;          // 换人！
    }
    if (c > m) {        // c 更大？
        m = c;          // 再换人！
    }
    return m;           // 最终赢家

}
int main() {
    cout << add (1, 2) <<endl;
    cout << add (10, 20) <<endl;
    int x =add(5, 5);
    cout << x <<endl;
    cout << max3(10, 99, 55) << endl;   // 期望 99
    cout << max3(10, 10, 5) << endl;    // 期望 10（并列测试！）
    return 0;
}