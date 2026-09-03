/* Write a program to swap the first and last digit of a number. */
#include <stdio.h>
int main(void){int n,first,last,digits=1;if(scanf("%d",&n)!=1||n<0)return 1;int x=n;while(x>=10){x/=10;digits*=10;}first=x;last=n%10;printf("%d\n",n<10?n:n-first*digits-last+last*digits+first);return 0;}
