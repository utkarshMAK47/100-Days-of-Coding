/* Write a program to reverse a given number. */
#include <stdio.h>
int main(void){int n,x,r=0;if(scanf("%d",&n)!=1)return 1;x=n<0?-n:n;do{r=r*10+x%10;x/=10;}while(x);printf("%s%d\n",n<0?"-":"",r);return 0;}
