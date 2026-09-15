#include <iostream>
using namespace std;

int main() {
    int arr[6] = {5, 10, 15, 20, 25, 30};
    cout << arr << endl; // ① 数组名直接输出 → 一串地址（首元素门牌号）
    cout << &arr[0] << endl;// ② 为什么写 &arr[0]？→ arr[0] 是第一个元素，
                            //    &arr[0] 就是第一个元素的门牌号
    int* p = arr;// ③ 为什么不是 &arr？→ arr 本身就是地址
    cout << *p << endl;// ④ *p = 第 0 个元素 = 5
    cout << *(p + 1) << endl;// ⑤ 为什么是 10 不是 11？→ p 是 int*，+1 = 跳一个 int（4字节）！
                             //    为什么这样设计？→ 指针就是配数组用的，跳就得跳"一个元素"
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;
    cout << *(p + 5) << endl;
    cout << p[3] << endl;// ⑦ 为什么 p[3] 也能用？→ p[3] 就是 *(p+3)，
                         //    指针和数组在访问时是"一家人"
    for (int i = 0; i < 6; i++) {
        cout << *(p + i) << endl;
    }
    return 0;
}