#include <iostream>
#include <cstdlib>// 随机数
#include <ctime>// 时间种子
#include <windows.h>// 中文显示
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);// 设置控制台输出为UTF-8编码
    srand(time(0));// 设置随机数种子
    int secret = rand() % 100 + 1;// 生成1-100之间的随机数
    int guess;
    int count = 0;
    while (true)
    {
        cout << "请输入你猜的数字（1-100）：";
        cin >> guess;
        count++;
        if (guess < secret)
        {
            cout << "太小了，请再试一次。" << endl;
        }
        else if (guess > secret){
            cout << "太大了，请再试一次。" << endl;
        }
        else
        {
            cout << "恭喜你，猜对了！你一共猜了" << count << "次。" << endl;
            break;
        }
    }
    return 0;
    
}