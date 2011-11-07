#include<stdio.h>
int main() {
int a[6]={1,2,3,4,5,7};
int b=6;
int i,j;
int index;
for(i=0;i<6;i++){
if(a[i]>b)
index=i;break;
}
for(j=index;j<6;j++)
a[j+1]=a[j];
a[index]=b;

for(i=0;i<=6;i++)
printf("%d",a[i]);
return 0;
}



