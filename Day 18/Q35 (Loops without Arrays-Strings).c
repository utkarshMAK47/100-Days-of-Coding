/* Write a program to print all factors of a given number. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1||n<=0)return 1;for(int i=1;i<=n;i++)if(n%i==0)printf("%d%c",i,i==n?'\n':' ');return 0;}
