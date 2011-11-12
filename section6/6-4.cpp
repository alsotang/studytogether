/*=============================================================================
#     FileName: 6-4.cpp
#         Desc: 求1！+2！。。。+20！
#       Author: ybooty
#        Email: ybooty@gmail.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2011-11-12 13:57:32
#      History:
=============================================================================*/
#include <stdio.h>
int main(){
    float s = 0,t = 1;
    int n;
    for(n = 1;n <= 20;n++)
    {
        t = t * n;
        s = s + t;
    }
    printf("1!+2!+3!+...+20!=%e\n",s);
}
