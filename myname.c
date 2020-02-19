#include<stdio.h>
void main()
{
int a,b,t;
printf("enter a and b values");
scanf("%d %d",&a,&b);
printf("values before changes a=%d\t b=%d",a,b);
t=a;
a=b;
b=t;
printf("values before changes a=%d\t b=%d",a,b);
}
