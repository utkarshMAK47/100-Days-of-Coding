/* Write a program to find the product of odd digits of a number. */
#include <stdio.h>
int main(void){int n,p=1,found=0;if(scanf("%d",&n)!=1)return 1;if(n<0)n=-n;do{int d=n%10;if(d%2){p*=d;found=1;}n/=10;}while(n);printf("%d\n",found?p:1);return 0;}
