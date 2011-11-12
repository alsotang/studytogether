#include <stdio.h>
int main(){ 
    char c; int letters = 0,space = 0,num = 0,other = 0; 
    while((c = getchar())!='\n')
    {	
        if(c >= 'a' && c<='z'||c >= 'A'&&c <= 'Z')
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

