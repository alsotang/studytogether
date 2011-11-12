/*=============================================================================
#     FileName: 6-5.cpp
#         Desc: k=1,分别求1到100的和，1到50的平方和，1到10的1/k
#       Author: ybooty
#        Email: ybooty@gmail.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2011-11-12 13:55:58
#      History:
=============================================================================*/
#include <stdio.h>
int main(){
    int n1 = 0,n2 = 0,n3 = 0;
    int k = 1;
    for(k = 1;k <= 100;k++)
        n1 = n1 + k;
    for(k = 1;k <= 50;k++)
        n2 = n2 + k*k;
    for(k = 1;k <= 10;k++)
        n3 = n3 + 1/k;
    printf("sum=%d",n1+n2+n3);
    return 0;
}
