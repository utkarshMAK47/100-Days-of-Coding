/* Write a program to swap two numbers without using a third variable. */
#include <stdio.h>
int main(void){int a,b;if(scanf("%d %d",&a,&b)!=2)return 1;if(a!=b){a^=b;b^=a;a^=b;}printf("After swap: %d %d\n",a,b);return 0;}
