/* Write a program to swap two numbers using a third variable. */
#include <stdio.h>
int main(void){double a,b,t;if(scanf("%lf %lf",&a,&b)!=2)return 1;t=a;a=b;b=t;printf("After swap: %.15g %.15g\n",a,b);return 0;}
