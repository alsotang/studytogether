/*=============================================================================
#     FileName: 5-5.cpp
#         Desc: 一个方程...
#       Author: Alsotang
#        Email: alsotang@gmail.com
#     HomePage: http://tangzhan.li
#      Version: 0.0.1
#   LastChange: 2011-11-08 20:02:22
#      History:
=============================================================================*/
#include <stdio.h>
int main(){
int x,y;
printf("输入一个x: ");
scanf("%d\n",&x);
if(x<1){y=x;
printf("y=%d",y);}
else if(x>=1&&x<10){y=2*x-1;
printf("y=%d",y);}
else{y=3*x-11;
printf("y=%d",y);}
}


