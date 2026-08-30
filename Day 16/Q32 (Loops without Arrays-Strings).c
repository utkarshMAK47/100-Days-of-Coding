/* Write a program to check if a number is a palindrome. */
#include <stdio.h>
int main(void){int n,original,r=0;if(scanf("%d",&n)!=1||n<0)return 1;original=n;do{r=r*10+n%10;n/=10;}while(n);puts(r==original?"Palindrome":"Not palindrome");return 0;}
