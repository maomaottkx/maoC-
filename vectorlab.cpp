#include <iostream>
#include <vector>       // 用 vector 必须先"报备"（include 对应头文件）
#include <windows.h>    // 中文输出救星 ①
using namespace std;

int main() {
    SetConsoleOutputCP(65001);      // 中文输出救星 ②：把控制台编码设成 UTF-8

    int x;
    vector<int> v;                  // 造一张空清单：不用写大小，它会自己长大

    while (true) {                  // 事先不知道用户要输几个数 → 用死循环，靠 break 退出
        cin >> x;                   // 每圈读一个数
        if (x == -1) break;         // -1 只是"停止信号"，读到就跳出
        v.push_back(x);             // 存 x 不存 -1：信号存进去会变成数据，污染结果
    }
    //while (cin >> x && x != -1) {
    //    v.push_back(x);
    //}等同于11，12，13，14，15行函数
    cout << "共 " << v.size() << " 个数" << endl;   // 用 v.size()：数量由用户决定，写死必错

    for (int i = 0; i < v.size(); i++) {            // 边界也用 v.size()，一个不漏
        cout << v[i] << " ";
    }
    cout << endl;                   // 全部打完后换一行（放循环外，不是每个数都换行）
    return 0;
}