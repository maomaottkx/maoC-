#include <iostream>
#include <string>
using namespace std;

int main() {
    // 声明字符串变量 name，用来存用户的名字
    string name;
    cout << "Enter your name: ";   // 输出提示文字（不换行，等用户输入）
    cin >> name;                   // 接收键盘输入，存进 name

    // 声明整数变量 age，用来存年龄
    int age;
    cout << "Enter your age: ";    // 提问年龄
    cin >> age;                    // 接收输入，存进 age

    // 声明整数变量 height，用来存身高（单位：厘米）
    int height;
    cout << "Enter your height in cm: ";  // 提问身高
    cin >> height;                        // 接收输入，存进 height

    // 把收集到的信息拼成一句话输出
    // 注意：cout 不会自动加空格，空格必须自己写在字符串里
    cout << "Hello, I am " << name << ". I am " << age << " years old and " << height << " cm tall." << endl;
    return 0;  // 返回 0 表示程序正常结束
}
