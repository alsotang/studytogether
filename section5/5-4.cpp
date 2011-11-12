/*=============================================================================
#     FileName: 5-4.cpp
#         Desc: 输入三个数，输出最大值
#       Author: Alsotang
#        Email: alsotang@gmail.com
#     HomePage: http://tangzhan.li
#      Version: 0.0.1
#   LastChange: 2011-11-08 20:01:49
#      History:
=============================================================================*/
#include <stdio.h>
int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maxNum;
    maxNum = max(max(a,b),c);
    printf("max is %d\n",maxNum);

    return 0;
}


