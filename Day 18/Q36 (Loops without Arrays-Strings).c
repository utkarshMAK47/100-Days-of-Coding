/* Write a program to find the HCF (GCD) of two numbers. */
#include <stdio.h>
int main(void){int a,b;if(scanf("%d %d",&a,&b)!=2)return 1;if(a<0)a=-a;if(b<0)b=-b;while(b){int t=a%b;a=b;b=t;}printf("%d\n",a);return 0;}
