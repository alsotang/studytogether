#include <stdio.h> 
#include <math.h> 
int main(){
    int a = 2;
    int n,index=0,i; //index的定义应该放在中间。而且在定义变量时，一定要记得赋初始值，所有的不管是char还是int还是float
                    //都要记得赋值为0
    int s = 0;
    printf("输入一个小于5的n:");
    scanf("%d",&n);
    for(i = 1; i <= n;i++) //你的for循环肯定没有执行成功，你运行过没有啊。。。//C++里(你现在一直是用g++编译的，所以系统识别C++的语法），可以在for语句里面直接int i，而不是提前在第5行声明i。在for语句里面声明的i会在for
                            //语句结束后自动释放掉。
        index = index + a; //index += a 比 index = index + a要快，不过无所谓，知道就行了
        s = s + index;  //同上注释
        a = a * 10;
    printf("%d", s);
                        //此处没有return 0，语句不规范容易造成难以发现的错误
}

