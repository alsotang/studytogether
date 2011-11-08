/*=============================================================================
#     FileName: 4-7-Also.cpp
#         Desc: 4-7.cpp对应的C++代码
#       Author: Alsotang
#        Email: alsotang@gmail.com
#     HomePage: http://tangzhan.li
#      Version: 0.0.1
#   LastChange: 2011-11-08 18:20:26
#      History:
=============================================================================*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const float PI = 3.1415926; //PI为常量，所以独立于main函数定义，并且为const类型。

int main(int argc, char **argv) {
    cout << "请输入半径R，高度H（以空格分隔）" << endl;
    float r; //半径
    float h; //高度
    cin >> r >> h;

    cout << "长度为：" << 2 * PI * r << endl;
    cout << "面积为：" << PI * r * r << endl;
    cout << "球面积为：" << 4 * PI * r * r << endl;
    cout << "球体积为：" << (4 / 3) * PI * (r * r * r) << endl;
    cout << "球柱体积为：" << h * PI * r * r  << endl;

    return 0;
}

