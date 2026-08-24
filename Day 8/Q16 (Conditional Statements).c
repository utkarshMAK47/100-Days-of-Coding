/* Write a program to input three numbers and find the largest among them using if-else. */
#include <stdio.h>
int main(void){double a,b,c,m;if(scanf("%lf %lf %lf",&a,&b,&c)!=3)return 1;m=a;if(b>m)m=b;if(c>m)m=c;printf("Largest is %.15g\n",m);return 0;}
