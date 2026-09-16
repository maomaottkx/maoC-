#include <iostream>
#include <vector>
#include <algorithm>        // sort / greater 住在这里
#include <windows.h>        // 中文输出救星 ①
using namespace std;

int main() {
    SetConsoleOutputCP(65001);      // 中文输出救星 ②

    int x;
    vector<int> v;                  // 空 vector：不用写大小，自己会长大

    while (true) {                  // 事先不知道输几个数 → 死循环 + break 退出
        cin >> x;
        if (x == -1) break;         // -1 是停止信号，不是数据
        v.push_back(x);
    }

    // 用 sort 不用自己写排序：O(n log n) 比冒泡 O(n²) 快得多，还不会写错
    sort(v.begin(), v.end());       // begin 在头上，end 在最后一位的「后头」（左闭右开）
    cout << "从小到大：";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());   // 加 greater<int>() = 大的排前面 = 降序
    cout << "从大到小：";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}