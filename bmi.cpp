#include <iostream>
#include <string>// 用 string 需要这个！
#include <windows.h>// 引入 Windows 系统函数（用来设置终端编码）
using namespace std;
int main() {
    SetConsoleOutputCP(65001);// 让终端用 UTF-8 显示中文（解决乱码）
    string choice;// 存用户"继续/退出"的选择
    while (true){// 无限循环
        double weight, height, bmi;// ① 声明三个小数变量：体重、身高、BMI 结果
        cout << "Enter weight in kilograms:";
        cin >> weight;// ② 提问 + 接收体重
        cout << "Enter height in meters:";
        cin >> height;// ③ 提问 + 接收身高
        bmi = weight / (height * height);// ④ 计算 BMI = 体重 ÷ 身高²（用小数类型，避免整数除法丢小数）
        cout << "Your BMI is: " << bmi << endl;// ⑤ 输出结果
        if (bmi < 18.5) {// ① 条件要括在圆括号 () 里！
            cout << "偏瘦" << endl;
        }else if (bmi >= 18.5 && bmi < 24){
            cout << "正常" << endl;
        }else if (bmi >= 24 && bmi < 28){
            cout << "偏胖" << endl;
        }else{
            cout << "肥胖" << endl;
        }
                // ④ 问用户要不要继续
        cout << "继续测试？输入 q 退出，其他任意键继续: ";
        // ⑤ 接收选择
        cin >> choice;
        // ⑥ 如果输入的是 q，退出循环
        if (choice == "q") {
            break;
        }// if/else 结束
    } 
    return 0;
}