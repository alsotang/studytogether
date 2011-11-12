/*=============================================================================
#     FileName: 6-10.cpp
#         Desc: 猴子第一天吃了桃子的一半，并且还多吃一个，第二天吃了第一天所剩下的一半，又多吃一个。。以此类推，到了第十天的时候还剩1个，
求第一天的桃子总数
#       Author: ybooty
#        Email: ybooty@gmail.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2011-11-12 23:33:19
#      History:
=============================================================================*/
#include <stdio.h>
int main(){
    int day;
    int sum = 1;
    for(day = 1;day < 10;day++)
    {
        sum = (sum + 1) * 2;
    }
    printf("桃子总数是: %d", sum);
}

