/* Write a program to find and display the sum of the first n natural numbers. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1||n<0||n>46340)return 1;printf("Sum=%d\n",n*(n+1)/2);return 0;}
