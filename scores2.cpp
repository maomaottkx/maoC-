#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main() {
    SetConsoleOutputCP(65001); // 设置控制台输出为 UTF-8 编码
    string names[3] = {"小明", "小红", "小刚"};   // 字符串数组！
    int score[3][4] = {
        {90, 85, 78, 92},
        {88, 77, 66, 99},
        {70, 80, 90, 60}
    };
    for (int i = 0; i < 3; i++) {
        int total = 0;        // 总分（从 0 开始累加）
        int max = score[i][0];   // 最高分：先假设第 1 个最大
        int min = score[i][0];   // 最低分：先假设第 1 个最小
        for (int j = 0; j < 4; j++) {   // 循环：在里面默默统计
            total += score[i][j];            // ① 累加
            if (score[i][j] > max) {         // ② 发现更大的？
                max = score[i][j];           //    更新最高分
            }
            if (score[i][j] < min) {         // ③ 发现更小的？
                min = score[i][j];           //    更新最低分
            }
        }
        cout << names[i]<< " 个学生的平均分: " << total / 4.0 << endl;
        cout << names[i]<< " 个学生的总分: " << total << endl;
        cout << names[i]<< " 个学生的最高分: " << max << endl;
        cout << names[i]<< " 个学生的最低分: " << min << endl;
    }
    return 0;
}
