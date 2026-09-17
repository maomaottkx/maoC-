#include <iostream>
#include <vector>
#include <algorithm>        // sort 住在这里
#include <windows.h>        // 中文输出救星 ①
using namespace std;

int main() {
    SetConsoleOutputCP(65001);      // 中文输出救星 ②（忘这行 → 中文全乱码）

    int x;
    vector<int> v;                  // 空 vector：大小不用预先定死

    while (true) {                  // 事先不知道输几个数 → 死循环 + break 退出
        cout << "请输入整数：";      // 提示语：不然用户对着黑屏发呆
        cin >> x;
        if (x == -1) break;         // 停止信号：没有 break 就是死循环，永远出不来
        v.push_back(x);             // 写在 break 之后：-1 是信号不是数据，不能存进去
    }

    sort(v.begin(), v.end());       // sort 是全局函数（不是 v.sort！）begin 在头上、end 在后头
    cout << "数据从小到大为：";       // 中文标签
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;                   // 全部打完后换一行
    return 0;
}