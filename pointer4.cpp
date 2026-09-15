# include <iostream>
using namespace std;

int main() {
    int* p = new int(42);//用 new 造一个 int，把 42 放进去
    cout << *p << endl;
    delete p;//delete 释放,防止内存泄漏
    p = nullptr;//置空避免野指针
    int n;
    cin >> n;//输入数组大小
    int* arr = new int[n];//动态分配一个数组
    for (int i = 0; i < n; i++) {
        cin >> arr[i];//输入数组元素
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";//输出数组元素
    }
    cout << endl;
    delete[] arr;//释放数组内存
    arr = nullptr;//置空避免野指针
    return 0;
}