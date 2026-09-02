/* Write a program to find the LCM of two numbers. */
#include <stdio.h>
int main(void){int a,b,x,y,g;if(scanf("%d %d",&a,&b)!=2||a==0||b==0)return 1;x=a<0?-a:a;y=b<0?-b:b;g=x;while(y){int t=g%y;g=y;y=t;}printf("%d\n",x/g*b);return 0;}
