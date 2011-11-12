#include <stdio.h> 
#include <math.h> 
int main(){
    int a = 2;
    int n,index=0,i;
    int s = 0;
    printf("输入一个小于5的n:");
    scanf("%d",&n);
    for(i = 1; i <= n;i++) 
        index = index + a;
        s = s + index;
        a = a * 10;
    printf("%d", s);
}

