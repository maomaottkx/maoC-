#include <iostream>
using namespace std;
int main() {
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
    }else (bmi >= 28){
        cout << "肥胖" << endl;
    }return 0;
}
