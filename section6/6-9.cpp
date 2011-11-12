/*=============================================================================
#     FileName: 6-9.cpp
#         Desc: 一球从100m落下，落下后反弹回原来高度的一半，再落下，求第十次落地时
经过多少m，第十次反弹的高度？
#       Author: ybooty
#        Email: ybooty@gmail.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2011-11-12 23:17:32
#      History:
=============================================================================*/
#include <stdio.h>
int main(){
    int i;
    float s = 100, h = s / 2;
    for(i = 0;i < 10;i++)
    {
        s += 2 * h;
        h = h / 2;
    }
    printf("第十次落地经过：%fm\n", s);
    printf("第十次的高度:%fm\n", h);
}

