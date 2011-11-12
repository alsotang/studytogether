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
//我重写给你看吧
//
//
//#include <stdio.h>  
//int main(){
//    float s = 0,t = 1;
//    int n;
//    for(n = 1;n <= 20;n++)
//    {
//        t = t * n;
//        s = s + t;
//    }
//    printf("1!+2!+3!+...+20!=%e\n",s);
//}
//
#include <stdio.h>
int main() {
    int sum = 0; //sum比s的意义清晰。去google一个概念“代码 自解释”，领会一下。
    for(int i = 1, t = 1; i <= 20 ; ++i) { //for循环用i做变量是惯例
        t *= i;
        sum += t;
    }
    printf("sum is %d\n", sum);
    return 0;
}

