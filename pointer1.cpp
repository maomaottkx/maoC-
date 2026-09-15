#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;// ① x：一个住着 10 的盒子（住户 10），y：一个住着 20 的盒子（住户 20)
                       // ② 为什么用 &x？→ 因为要拿 x 的门牌号（地址）
    int* x_ptr = &x;//    为什么 int*？→ 告诉编译器"p 记的是 int 类型盒子的门牌号" 
    int* y_ptr = &y;
    cout << x << endl;// ③ 直接看盒子
    cout << &x << endl; // ④ 问门牌号
    cout << x_ptr << endl; // ⑤ x_ptr 记的就是门牌号 
    cout << *x_ptr << endl; // ⑥ *x_ptr = 顺着门牌号进房间
    *x_ptr = 99;//*x_ptr 就是 x 本人,所以能改
                //通过门牌号进去，把住户换成 99
    cout << x << endl; 
    x_ptr = &y;              // 便利贴换门牌号 → 指向 y 的房间
    cout << x << endl;       // 输出 x → 应该还是 99！（屋里人没被动）
    cout << *x_ptr << endl;  // 输出 *x_ptr → 应该 20（现在看到的是 y）
    return 0;
}