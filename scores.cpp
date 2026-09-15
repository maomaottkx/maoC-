#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001); // 设置控制台输出为 UTF-8 编码
    int score[5] = {90, 85, 78, 92, 88};
    int total = 0;        // 总分（从 0 开始累加）
    int max = score[0];   // 最高分：先假设第 1 个最大
    int min = score[0];   // 最低分：先假设第 1 个最小
    for (int i = 0; i < 5; i++) {   // 循环：在里面默默统计
        total += score[i];            // ① 累加
        if (score[i] > max) {         // ② 发现更大的？
            max = score[i];           //    更新最高分
        }
        if (score[i] < min) {         // ③ 发现更小的？
            min = score[i];           //    更新最低分
        }
    }
    cout << "总分：" << total << endl;
    cout << "平均分：" << total / 5.0 << endl;
    cout << "最高分：" << max << endl;
    cout << "最低分：" << min << endl;
    return 0;
}