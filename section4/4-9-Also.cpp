/*=============================================================================
#     FileName: 4-9-Also.cpp
#         Desc: 4-9.cpp对应的C++代码
#       Author: Alsotang
#        Email: alsotang@gmail.com
#     HomePage: http://tangzhan.li
#      Version: 0.0.1
#   LastChange: 2011-11-08 18:35:05
#      History:
=============================================================================*/

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    cout << "输入华氏摄氏度：" << endl;
    float f; //华氏度
    cin >> f;

    cout << "摄氏度为" << (5.0 / 9.0) * (f - 32.0) << endl;
    return 0;
}

