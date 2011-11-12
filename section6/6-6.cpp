#include <stdio.h>
int main(){
    int num, hundred, ten, unit;
    for(num = 100;num < 1000;num++)
    {   hundred = num/100;
        ten =( num - hundred * 100)/10;
        unit = (num - hundred * 100 - ten * 10);
        if(hundred * hundred * hundred + ten * ten * ten + unit * unit * unit == num)
            printf("%d\n",num);
    }
    
}
