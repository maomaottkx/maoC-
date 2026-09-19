#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

// 结构体定义写在 main 外面：因为类型必须先"定义"才能"使用"，
// 写在 main 里面的话，同一个文件后面的函数就看不到它了。
// 它把"姓名 + 分数"这两种不同类型的数据打包成一个整体，
// 相当于 Python 里的一个 dict：{"name": "小黄", "score": 100}
struct Student {
    string name;
    int score;
};  // ← 这个分号是 struct 的命根子，漏了后面所有代码一起报错

int main() {
    SetConsoleOutputCP(65001);  // 放在 main 第一行：让控制台把中文按 UTF-8 解释，否则乱码
    vector<Student> v;  // 元素类型是 Student，不是 int —— vector<什么> 就存什么

    // 大括号 {名字, 分数} 会按成员声明顺序（先 name 后 score）自动填进去
    v.push_back({"小黄", 100});
    v.push_back({"小罗", 95});
    v.push_back({"小陈", 90});

    // 遍历：i 是下标，从 0 开始（数组下标从 0 数起）
    // 条件用 v.size() 而不是写死 3，这样以后加人也照样能跑全
    // (int) 是把无符号的 size() 转成 int，避免"有符号和无符号比较"的警告
    for (int i = 0; i < (int)v.size(); i++) {
        cout << "姓名：" << v[i].name << "，成绩：" << v[i].score << endl;
        // v[i] 先取出第 i 个学生这个"整体"，再用点号 . 从里面掏成员
    }

    // 找最高分：先把第 0 个人当成"擂主"，然后从第 1 个开始挑战
    int bestScore = v[0].score;  // 名字不叫 max：max 是标准库里的函数，重名会把它遮住
    int bestIndex = 0;  // 光记分数不够，还要记"擂主是第几个人"，最后才拿得到名字

    for (int n = 0; n < (int)v.size(); n++) {
        // 这里是 n = 0，从第 0 个开始比也不影响结果：
        // 第 0 个跟自己比，v[0].score > bestScore 永远是 false，不会误更新
        if (v[n].score > bestScore) {
            bestScore = v[n].score;  // 分数换人
            bestIndex = n;           // 下标也要一起换，两个必须同步更新
            // 为什么循环里不能直接 cout 名字？因为 n 跑完就"过期"了，
            // 循环结束后 n 等于 v.size()，是个已经越界的下标，
            // 所以必须把"谁是擂主"存进 bestIndex 带出循环
        }
    }

    // 用带出来的下标取出名字，这样名字和分数一定是同一个人的
    cout << "最高分学生：" << v[bestIndex].name << endl;
    cout << "分数为：" << bestScore << endl;

    return 0;  // 告诉系统"程序正常结束"
}
