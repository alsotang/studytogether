//注释一下这个文件，看不懂
#include <stdio.h>
int main(){
    int num, hundred, ten, unit; //记得赋初始值0
    for(num = 100;num < 1000;num++)
    {   hundred = num/100;
        ten =( num - hundred * 100)/10;
        unit = (num - hundred * 100 - ten * 10);
        if(hundred * hundred * hundred + ten * ten * ten + unit * unit * unit == num)
            printf("%d\n",num);
    }
    
}
