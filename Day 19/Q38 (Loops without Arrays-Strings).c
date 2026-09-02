/* Write a program to find the sum of digits of a number. */
#include <stdio.h>
int main(void){int n,sum=0;if(scanf("%d",&n)!=1)return 1;if(n<0)n=-n;do{sum+=n%10;n/=10;}while(n);printf("%d\n",sum);return 0;}
