/* Write a program to take a number as input and print its equivalent binary representation. */
#include <stdio.h>
int main(void){unsigned int n;int bits[32],count=0;if(scanf("%u",&n)!=1)return 1;if(n==0){puts("0");return 0;}while(n){bits[count++]=(int)(n%2);n/=2;}while(count--)printf("%d",bits[count]);putchar('\n');return 0;}
