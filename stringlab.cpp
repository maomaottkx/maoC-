#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(65001);
    string name;
    cout << "请输入您的名字: ";
    cin >> name;
    cout << name.size() <<endl;// ① 输出名字的长度
    cout <<"你好，" << name << "!" << endl;// ② 拼接输出："你好，xxx！"（用 + 号）
    if (name.find("a") != string::npos) {// ③ 用 find 检查名字里有没有字母 "a"，输出"有 a"或"没有 a"（⚠️ 用 npos 判断！）
        cout << "名字中包含字母 'a'" << endl;
    }else {
        cout << "名字中不包含字母 'a'" << endl;
    }
    string sub = name.substr(0, 3);// ④ 用 substr 截取名字前 3 个字符输出
    cout << "名字的前三个字符是: " << sub << endl;
    return 0;
}