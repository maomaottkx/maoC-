#include <iostream>
using namespace std;

void swap(int* a, int* b) {   // ① 为什么两个都收指针？→ 要改两个原件
    int temp = *a;            // ② 为什么 *a？→ 从 a 屋里取出值存到临时盒
    *a = *b;                  // ③ 用 b 屋里的值覆盖 a 屋
    *b = temp;                // ④ 把临时盒里的原值放进 b 屋
}
// main 里调用：swap(&x, &y);
void addOne(int* p) {   // ① 为什么是 int* p？→ 收进来的是"门牌号"，不是值！
    (*p)++;             // ② 为什么必须 (*p)++？→ 运算符优先级：++ 比 * 高！
                        //    写 *p++ 会变成 *(p++) = 先取屋里的值，再让指针跳走！
                        //    (*p)++ 才是"给屋里的人加一"
}

void printArr(int arr[], int n) {  // ① 为什么 int arr[] 能收数组？
                                   // → 数组名就是地址！这个参数其实等价于 int* arr！
    for (int i = 0; i < n; i++) {  // ② 为什么还要传 n？→ 数组退化成指针后，
        cout << arr[i] << " ";     //    函数就不知道数组多大了！必须把大小一起传
    }                              //    这是新手最容易炸的坑
    cout << sizeof(arr) << endl;
}
 // main 里调用：printArr(arr, 6);
int main() {
    int x = 3, y = 7;
    cout << "x = " << x << ", y = " << y << endl;
    swap(&x, &y);  // ① 为什么要传地址？→ swap 里收的是指针，必须给它"门牌号"
    cout << "x = " << x << ", y = " << y << endl;
    addOne(&x);
    cout << "x = " << x << endl;
    addOne(&x);
    cout << "x = " << x << endl;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printArr(arr, 6);
    return 0;
}