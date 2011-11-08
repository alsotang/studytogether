#include <stdio.h>
int main()
{
float r,h,l,s,qius,qiuv,zhuv;
float a=3.1415926;
printf("输入半径r，输入高度h: ");
scanf("%f,%f",&r,&h);
l=2*a*r;
s=a*r*r;
qius=3.0/4.0*a*r*r;
qiuv=4*a*r*r*r;
zhuv=a*r*r*h;
printf("长度为: l=%6.2f\n",l);
printf("面积为: s=%6.2f\n",s);
printf("球面积: qius=%6.2f\n",qius);
printf("球体积：qiuv=%6.2f\n",qiuv);
printf("求助体积:zhuv=%6.2f\n",zhuv);
}


