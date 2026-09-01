/* Write a program to check if a number is prime. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1)return 1;int prime=n>=2;for(int i=2;prime&&i<=n/i;i++)if(n%i==0)prime=0;puts(prime?"Prime":"Not prime");return 0;}
