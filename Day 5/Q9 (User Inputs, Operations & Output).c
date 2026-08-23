/* Write a program to calculate simple and compound interest for given principal, rate, and time. */
#include <stdio.h>
int main(void){double p,r,compound;int t;if(scanf("%lf %lf %d",&p,&r,&t)!=3||p<0||t<0)return 1;compound=p;for(int i=0;i<t;i++)compound*=1+r/100.0;printf("Simple Interest=%.2f, Compound Interest=%.2f\n",p*r*t/100.0,compound-p);return 0;}
