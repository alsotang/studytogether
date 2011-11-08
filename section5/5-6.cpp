/*=============================================================================
#     FileName: 5-6.cpp
#         Desc: 输入一个分数，然后判断是ABCD等级..60分一下都是E。
#       Author: Alsotang
#        Email: alsotang@gmail.com
#     HomePage: http://tangzhan.li
#      Version: 0.0.1
#   LastChange: 2011-11-08 20:03:32
#      History:
=============================================================================*/
#include <stdio.h>
int main(){
float score;
char grade;
printf("输入一个分数：");
scanf("%f",&score);
while(score>100&&score<0){
    printf("请再输入大哥：");
    scanf("再输一次%f",&score);
    }
switch((int)(score/10))
{
case 10: grade='A';break;
case 9: grade='A';break;
case 8: grade='B';break;
case 7: grade='C';break;
case 6: grade='D';break;
case 5: 
case 4: 
case 3: 
case 2: 
case 1:
case 0: grade='E';
}
printf("等级为:%c",grade);
}
