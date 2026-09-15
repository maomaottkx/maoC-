#include <iostream>          // 位置① 文件最上方：先进货再干活（编译器从上往下读）
using namespace std;         // 位置② include 之后：声明"标准库工具免门票"

void swap(int &a, int &b) {  // 位置③ main 之前：函数必须先定义后使用
                             //        & 写在参数里 = 传原件（这是关键！）
    int temp = a;            // 位置④ 第一行先备份：为什么？因为下一步 a=b
                             //        会把 a 原来的值冲掉，得先存起来！
    a = b;                   // 把 b 塞给 a（a 原件变了）
    b = temp;                // 把备份还给 b（b 原件也变了）
}                            // 位置⑤ 没有 return：void = 只干活不交货

void addOne (int &a) {
    a = a + 1;
}
int main() {                 // 程序入口：编译器固定从这开始执行
    int x = 10, y = 20, z = 30;
    swap(x, y);              // 调用放 main 里：使用工具的活儿在主流程发生
    addOne(z);
    cout << z << endl;
    cout << x << " " << y << endl;  // 调用之后：先换完再展示结果
    return 0;                // 最后：收工打卡
}

