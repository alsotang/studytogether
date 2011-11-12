/*=============================================================================
#     FileName: 6-8.cpp
#         Desc: 2/1,3/2,5/3,8/5,13/8,21/13。。。前20项之和
#       Author: ybooty
#        Email: ybooty@gmail.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2011-11-12 23:16:27
#      History:
=============================================================================*/
#include <stdio.h>
int main(){
    int i, t;
    float a = 2,b = 1,sum = 0;
    for(i = 0;i < 20;i++)
    {
        sum += a/b;
        t = a;
        a += b;
        b = t;
    }
    printf("sum = %9.6f", sum);
}

