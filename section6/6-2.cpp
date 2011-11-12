#include <stdio.h>
int main(){ 
    char c; int letters = 0,space = 0,num = 0,other = 0;  //int开始的部分另开一行。
    while((c = getchar())!='\n') //!= 是个二元运算符，旁边需要空格
    {	
        if(c >= 'a' && c<='z'||c >= 'A'&&c <= 'Z') //凡是if/else语句都要记得加上{}括号，否则很容易再新加了语句之后，带来难以发现的bug
            letters++;
        else if(c==' ')
            space++;
        else if(c >= '0'&&c <='9')
            num++;
        else
            other++;
    }
    printf("字母数字：%d\n空格:%d\n数字:%d\n其他%d\n", letters, space, num, other);
    return 0;
}

//总得来说编码风格清晰很多了
