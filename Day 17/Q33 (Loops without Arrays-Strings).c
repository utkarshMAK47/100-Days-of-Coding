/* Write a program to check if a number is an Armstrong number. */
#include <stdio.h>
int main(void){int n,x,p=0,digits=0;if(scanf("%d",&n)!=1||n<0)return 1;x=n;do{digits++;x/=10;}while(x);x=n;do{int d=x%10,q=1;for(int i=0;i<digits;i++)q*=d;p+=q;x/=10;}while(x);puts(p==n?"Armstrong":"Not Armstrong");return 0;}
