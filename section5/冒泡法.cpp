#include <stdio.h>
int main(){
    int i,j,t;
    int a[10];
    printf("输入10个数字");
    printf("\n");
    for(i = 1;i <= 10;i++)
        scanf("%d",&a[i]);
    for(j = 0;j < 9; j++)
        for(i = 0;i < 9 - j;i++)
        if(a[i] > a[i+1])
        {   t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
        }
    printf("\n");
    for(i = 0;i < 10;i++)
        printf("%d",a[i]);
}

