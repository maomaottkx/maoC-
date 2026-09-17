#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001); 
    int x;
    vector<int> v;
    while (true) {
        cout << "请输入整数：";
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << "数据从小到大为：";
    for (int i = 0;i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
