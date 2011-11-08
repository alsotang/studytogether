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
int main(){
int a,b,c,temp,max;
printf("输入三个整数：");
scanf("%d,%d,%d",&a,&b,&c);
temp=(a>b)? a:b;
max=(temp>c)? temp:c;
printf("最大数max=%d",max);
return 0;}
